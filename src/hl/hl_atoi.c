/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** hl_atoi.c
*/

#include <stdbool.h>
#include "my.h"

static int hl_char_is_numeric(char chr)
{
    if (chr >= '0' && chr <= '9') {
        return true;
    }
    return false;
}

int hl_atoi(char *nb)
{
    int i = my_strlen(nb);
    int res = 0;
    int pos = 1;

    for (; i >= 0; i--) {
        if (hl_char_is_numeric(nb[i]) == true) {
            res += (nb[i] - '0') * pos;
            pos *= 10;
        }
    }
    if (nb[0] == '-') {
        res *= (-1);
    }
    return res;
}
