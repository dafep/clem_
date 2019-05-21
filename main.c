/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** main
*/

#include "op.h"
#include "my.h"
#include "core.h"

op_t op_tab[] = {
    {"live", 1, {T_DIR}, 1, 10, "alive"},
    {"ld", 2, {T_DIR | T_IND, T_REG}, 2, 5, "load"},
    {"st", 2, {T_REG, T_IND | T_REG}, 3, 5, "store"},
    {"add", 3, {T_REG, T_REG, T_REG}, 4, 10, "addition"},
    {"sub", 3, {T_REG, T_REG, T_REG}, 5, 10, "soustraction"},
    {"and", 3, {T_REG | T_DIR | T_IND, T_REG | T_IND | T_DIR, T_REG}, 6, 6,
      "et (and  r1, r2, r3   r1&r2 -> r3"},
    {"or", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 7, 6,
      "ou  (or   r1, r2, r3   r1 | r2 -> r3"},
    {"xor", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 8, 6,
      "ou (xor  r1, r2, r3   r1^r2 -> r3"},
    {"zjmp", 1, {T_DIR}, 9, 20, "jump if zero"},
    {"ldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 10, 25,
      "load index"},
    {"sti", 3, {T_REG, T_REG | T_DIR | T_IND, T_DIR | T_REG}, 11, 25,
      "store index"},
    {"fork", 1, {T_DIR}, 12, 800, "fork"},
    {"lld", 2, {T_DIR | T_IND, T_REG}, 13, 10, "long load"},
    {"lldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 14, 50,
      "long load index"},
    {"lfork", 1, {T_DIR}, 15, 1000, "long fork"},
    {"aff", 1, {T_REG}, 16, 2, "aff"},
    {0, 0, {0}, 0, 0, 0}
};

char **my_search_word(char *str, char *word)
{
    char **arg = my_str_to_wordtab(str, ' ');

    for (int i = 0; arg[i] != NULL; i += 1)
        if (my_strcmp(arg[i], word) == 0)
            return (arg);
    my_free_tab(arg);
    return (NULL);
}

int count_arg(char **arg, char *arg_check)
{
    int nbr = 0;
    bool act = false;

    for (int i = 0; arg[i] != NULL; i += 1) {
        if (my_strcmp(arg[i], arg_check) == 0)
            act = true;
        if (act == true)
            nbr += 1;
    }
    return (nbr - 1);
}

int check_arg_flag(char **arg, char *arg_flag)
{
    for (int i = 0; arg[i] != NULL; i += 1)
        if (my_strcmp(arg[i], arg_flag) == 0)
            return (i);
    return (0);
}

int check_flag(char **arg, char *arg_flag)
{
    int (*flag[])(int, char **) = {my_live, my_ld, my_st, my_add, my_sub,
        my_and, my_or, my_xor, my_zjmp, my_ldi, my_sti, my_fork, my_lld,
        my_lldi, my_lfork, my_aff};
    char *flag_bis[] = {"live", "ld", "st", "add", "sub", "and", "or", "xor",
        "zjmp", "ldi", "sti", "fork", "lld", "lldi", "lfork", "aff", NULL};
    int arg_check = check_arg_flag(arg, arg_flag);

    for (int i = 0; flag_bis[i] != NULL; i += 1)
        if (my_strcmp(flag_bis[i], arg_flag) == 0)
            return flag[i](arg_check, arg) == 84 ? 84 : 0;
    return (0);
}

int check_arg_of_flag(char **arg, char *arg_check)
{
    int nbr = count_arg(arg, arg_check);

    for (int i = 0; op_tab[i].mnemonique; i += 1) {
        if (my_strcmp(op_tab[i].mnemonique, arg_check) == 0) {
            if (!(op_tab[i].nbr_args == nbr))
                return (84);
            return check_flag(arg, arg_check) == 84 ? 84 : 0;
        }
    }
    return (84);
}

int check_arg(char *arg)
{
    char **arg_return = NULL;
    char *arg_check[17] = {"live", "ld", "st", "add", "sub", "and", "or",
    "xor", "zjmp", "ldi", "sti", "fork", "lld", "lldi", "lfork", "aff", NULL};
    arg = my_rm_space_and_tab(arg);

    for (int i = 0; arg_check[i] != NULL; i += 1)
        if ((arg_return = my_search_word(arg, arg_check[i])) != NULL)
            return check_arg_of_flag(arg_return, arg_check[i]) == 84 ? 84 : 0;
    return (0);
}

int check_file(char *file)
{
    char *line_buf = NULL;
    size_t line_buf_size = 0;
    int line_count = 0;
    ssize_t line_size;
    FILE *fp = fopen(file, "r");

    if (!fp)
        return (my_error("Error opening file\n", 1));
    line_size = getline(&line_buf, &line_buf_size, fp);
    for (; line_size >= 0 ;) {
        line_count += 1;
        if (check_arg(line_buf) == 84)
            return (84);
        line_size = getline(&line_buf, &line_buf_size, fp);
    }
    free(line_buf);
    line_buf = NULL;
    fclose(fp);
    return (0);
}

int main()
{
    return (check_file("abel.s"));
}