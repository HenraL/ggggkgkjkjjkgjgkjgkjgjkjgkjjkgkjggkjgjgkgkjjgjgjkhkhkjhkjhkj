/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** jitter jitter
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ' ';
        }
    }
    return str;
}
