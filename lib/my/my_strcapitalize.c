/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** jitter jitter
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == ' ') {
            str[i] = str[i] - ' ';
        }
        if ((str[i] >= 'A' && str[i] <= 'Z') && str[i - 1] != ' ') {
            str[i] = str[i] + ' ';
        }
    }
    return str;
}
