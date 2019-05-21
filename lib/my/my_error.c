/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_error
*/

#include "my.h"

int my_error(char *str, int ret)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        write(2, &str[i], 1);
    return (ret);
}