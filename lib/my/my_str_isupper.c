/*
** EPITECH PROJECT, 2021
** Task0? - my_str_isupper.c
** File description:
** abc
*/

#include <stdbool.h>

int my_str_isupper(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] > '@' && str[i] < '[') {
            return false;
        }
    }
    return true;
}
