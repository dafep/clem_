/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_falg_2
*/

#include "op.h"
#include "core.h"
#include <stdio.h>

int my_and(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && (arg[nbr_total - 3][0] == 'r' ||
    arg[nbr_total - 3][0] == '%' || num(arg[nbr_total - 3], 0) == true) &&
    (num(arg[nbr_total - 2], 0) == true || arg[nbr_total - 2][0] == 'r' ||
    arg[nbr_total - 2][0] == '%') && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}

int my_or(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && (arg[nbr_total - 3][0] == 'r' ||
    num(arg[nbr_total - 3], 0) == true || arg[nbr_total - 3][0] == '%') &&
    (arg[nbr_total - 2][0] == 'r' || num(arg[nbr_total - 2], 0) == true ||
    arg[nbr_total - 2][0] == '%') && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}

int my_xor(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && (arg[nbr_total - 3][0] == 'r' ||
    num(arg[nbr_total - 3], 0) == true || arg[nbr_total - 3][0] == '%') &&
    (arg[nbr_total - 2][0] == 'r' || num(arg[nbr_total - 2], 0) == true ||
    arg[nbr_total - 2][0] == '%') && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}

int my_zjmp(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 1 && arg[nbr_total - 1][0] == '%')
        return (0);
    return (84);
}

int my_ldi(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 3 && (arg[nbr_total - 3][0] == 'r' ||
    arg[nbr_total - 3][0] == '%' || num(arg[nbr_total - 3], 0) == true) &&
    (arg[nbr_total - 2][0] == '%' || arg[nbr_total - 2][0] == 'r') &&
    arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}