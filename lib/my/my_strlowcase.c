/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** jitter jitter
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ' ';
        }
    }
    return str;
}
