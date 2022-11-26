/*
** EPITECH PROJECT, 2021
** Task0? - my_str_isprintable.c
** File description:
** abc
*/

#include <stdbool.h>

int my_str_isprintable(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            return false;
        }
    }
    return true;
}
