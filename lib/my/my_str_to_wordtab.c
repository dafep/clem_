/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my_str_to_wordtab
*/

#include "my.h"

char **clear_string2d(char **cmd);

static int word_count(char *str, char c)
{
    int i = 0;
    int cpt = 0;
    char car_prec = c;

    for (; str[i] != '\0'; i++) {
        if ((car_prec == c) && (str[i] != c))
            cpt++;
        car_prec = str[i];
    }
    return (cpt);
}

static char *my_strncpy(char *str, char *dest, int debut, char c)
{
    int i = 0;

    for (; (str[debut] != c) && (str[debut] != '\0'); i++) {
        dest[i] = str[debut];
        debut++;
    }
    dest[i] = '\0';
    return (dest);
}

static int count(char *str, int debut, char c)
{
    int i = 0;

    for (; (str[debut] != c) && (str[debut] != '\0'); i++)
        debut++;
    return (i);
}

char **my_str_to_wordtab(char *str, char c)
{
    int i = 0;
    int j = 0;
    char car_prec = c;
    char **tab = malloc((word_count(str, c) + 1) * sizeof(char *));

    for (; str[i] != '\0'; i++) {
        if ((car_prec == c) && (str[i] != c)) {
            tab[j] = malloc((count(str, i, c) + 1) * sizeof(char));
            my_strncpy(str, tab[j], i, c);
            j++;
        }
        car_prec = str[i];
    }
    tab[j] = NULL;
    clear_string2d(tab);
    return (tab);
}