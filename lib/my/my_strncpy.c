/*
** EPITECH PROJECT, 2022
** Task02 - my_strncpy.c
** File description:
** jitter jitter
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (; src[i] != '\0' && n > i; i++) {
        dest[i] = src[i];
    }
    if (n >= my_strlen(dest)) {
        dest[n] = '\0';
    }
    return dest;
}
