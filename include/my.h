/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

char **clear_string2d(char **cmd);
char *my_rm_space_and_tab(char *str);
int my_strncmp(const char *str1, const char *str2, int nb);
char *my_strstr(char *str, char const *to_find);
int my_strlen(char const *str);
char **my_str_to_wordtab(char *str, char c);
void my_free_tab(char **tab);
int my_strcmp(const char *s1, const char *s2);
int my_error(char *str, int ret);

#endif /* !MY_H_ */
