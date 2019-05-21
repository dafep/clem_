/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** core
*/

#ifndef CORE_H_
#define CORE_H_

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int my_live(int arg_check, char **arg);
int my_ld(int arg_check, char **arg);
int my_st(int arg_check, char **arg);
int my_add(int arg_check, char **arg);
int my_sub(int arg_check, char **arg);
int my_and(int arg_check, char **arg);
int my_or(int arg_check, char **arg);
int my_xor(int arg_check, char **arg);
int my_zjmp(int arg_check, char **arg);
int my_ldi(int arg_check, char **arg);
int my_sti(int arg_check, char **arg);
int my_fork(int arg_check, char **arg);
int my_lld(int arg_check, char **arg);
int my_lldi(int arg_check, char **arg);
int my_lfork(int arg_check, char **arg);
int my_aff(int arg_check, char **arg);
int count_argument(char **arg);
bool check_num(char *str, int skip);
int count_arg_after(char **arg, int index);
bool num(char *str, int skip);
bool check_register(char *str, int skip);

#endif /* !CORE_H_ */
