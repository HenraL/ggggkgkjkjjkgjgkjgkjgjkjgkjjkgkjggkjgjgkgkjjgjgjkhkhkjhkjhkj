/*
** EPITECH PROJECT, 2022
** B-CPE-100-PAR-1-1-Cworkshoplib-henry.letellier
** File description:
** len_nb.c
*/

#include <stdlib.h>
#include "my.h"

static int is_negative(int nb)
{
    if (nb < 0) {
        nb *= -1;
    }
    return nb;
}

static char *convert_to_char(int nb, char *str)
{
    int i = 0;
    for (; nb != 0; i++) {
        str[i] = nb % 10 + 48;
        nb /= 10;
    }
    return str;
}

char *nb_to_char(int nb)
{
    char *str = malloc(sizeof(char) * 64);
    int i = 0;
    int temp = nb;

    nb = is_negative(nb);
    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    str = convert_to_char(nb, str);
    if (temp < 0) {
        str[i] = '-';
        str[i + 1] = '\0';
    } else {
        str[i] = '\0';
    }
    str = my_revstr(str);
    return (str);
}
