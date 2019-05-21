/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_flag_4
*/

#include "op.h"
#include "core.h"
#include <stdio.h>

int my_aff(int arg_check, char **arg)
{
    int nbr_total = count_argument(arg);
    int arg_after = count_arg_after(arg, arg_check);

    if (arg_after == 1 && arg[nbr_total - 1][0] == 'r')
        return (0);
    return (84);
}