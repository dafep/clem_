/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** ess_2
*/

#include "core.h"
#include "my.h"

static bool check_label(char *str)
{
    for (int i = 0; flag[i] != NULL; i += 1) {
        if (strcmp())
    }
}

bool check_is_label(char *str)
{
    bool act = false;
    char **cut = NULL;
    bool ret = false;

    if (str == NULL)
        return (false);
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == ':') {
            act = true;
            break;
        }
    }
    if (act == true) {
        cut = my_str_to_wordtab(str, ':');
        if (cut[1] != NULL) {
            ret = check_label(cut[1]);
            my_free_tab(cut);
            return (ret);
        }
    }
    my_free_tab(cut);
    return (false);
}