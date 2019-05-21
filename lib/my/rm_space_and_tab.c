/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** rm_space_and_tab
*/

#include "my.h"

static int is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\v' || c == '\n');
}

char *my_rm_space_and_tab(char *str)
{
    int i = 0;
    int j = 0;

    for (; is_sep(str[i]); i++);
    while (str[i] != '\0') {
        for (; is_sep(str[i]) && is_sep(str[i + 1]); i++);
        if (is_sep(str[i])) {
            str[j++] = ' ';
            i++;
        }
        while (!is_sep(str[i]) && str[i] != '\0')
            str[j++] = str[i++];
    }
    for (; is_sep(str[j - 1]); j--);
    str[j] = '\0';
    return (str);
}