/*
** EPITECH PROJECT, 2021
** Task0? - my_str_isalpha.c
** File description:
** abc
*/

#include <stdbool.h>

int my_str_isalpha(char const *str)
{
    int	i = 0;

    for (; str[i] != '\0'; i++) {
        if ((str[i] < 'A' && str[i] > 'Z') || (str[i] < 'a' && str[i] > 'z')) {
            return false;
        }
    }
    return true;
}
