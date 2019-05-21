/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(const char *str1, const char *str2, int nb)
{
    int idx = 0;

    if (str1 == NULL || str2 == NULL)
        return (-1);
    while (str1[idx] && str2[idx] && idx < nb) {
        if (str1[idx] != str2[idx])
            return (str1[idx] - str2[idx]);
        idx += 1;
    }
    if (idx < nb)
        return (-1);
    return (0);
}
