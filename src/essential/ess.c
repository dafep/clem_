/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** ess
*/

#include "my.h"
#include "core.h"

int count_argument(char **arg)
{
    if (arg == NULL)
        return (0);
    for (int i = 0; arg[i] != NULL; i += 1)
        if (arg[i + 1] == NULL)
            return (i + 1);
    return (0);
}

bool check_num(char *str, int skip)
{
    if (str == NULL)
        return (false);
    for (int i = 0; str[i + skip] != '\0'; i += 1)
        if (!(str[i + skip] >= '0' && str[i + skip] <= '9') &&
        !(str[i + skip] >= 'a' && str[i + skip] <= 'z') &&
        !(str[i + skip] >= 'A' && str[i + skip] <= 'Z'))
            return (false);
    return (true);
}

bool num(char *str, int skip)
{
    if (str == NULL)
        return (false);
    for (int i = 0; str[i + skip] != '\0'; i += 1)
        if (!(str[i + skip] >= '0' && str[i + skip] <= '9'))
            return (false);
    return (true);
}

bool check_register(char *str, int skip)
{
    int len = my_strlen(str);

    if (str == NULL)
        return (false);
    for (int i = 0; str[i + skip] != '\0'; i += 1)
        if (!((len == 2 || len == 3) &&
        str[i + skip] >= '1' && str[i + skip] <= '9'))
            return (false);
    return (true);
}

int count_arg_after(char **arg, int index)
{
    int j = 0;

    if (arg == NULL)
        return (0);
    for (int i = index; arg[i] != NULL; i += 1, j += 1)
        if (arg[i + 1] == NULL)
            return (j);
    return (0);
}