/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** clear_string2d
*/

char *my_rm_space_and_tab(char *str);

char **clear_string2d(char **cmd)
{
    int i = 0;

    while (cmd[i]) {
        cmd[i] = my_rm_space_and_tab(cmd[i]);
        i += 1;
    }
    return (cmd);
}