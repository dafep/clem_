/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_free_tab
*/

#include "my.h"

void my_free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}