/*
** EPITECH PROJECT, 2021
** Task0? - my_str_islower.c
** File description:
** abc
*/

#include <stdbool.h>

int my_str_islower(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] < 'a' && str[i] > 'z') {
            return false;
        }
    }
    return true;
}
