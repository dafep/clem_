/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_flag
*/

#include "op.h"
#include "core.h"

int my_live(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 1 && arg[nbr_total - 1][0] == '%')
        return (0);
    return (84);
}

int my_ld(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 2 && (arg[nbr_total - 2][0] == '%' ||
    num(arg[nbr_total - 2], 0) == true) && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}

int my_st(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 2 && arg[nbr_total - 2][0] == 'r' &&
    (num(arg[nbr_total - 1], 0) == true || arg[nbr_total - 1][0] == 'r'))
        return (0);
    return (84);
}

int my_add(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && arg[nbr_total - 3][0] == 'r' &&
    arg[nbr_total - 2][0] == 'r' && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}

int my_sub(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && arg[nbr_total - 3][0] == 'r' &&
    arg[nbr_total - 2][0] == 'r' && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}