/*
** EPITECH PROJECT, 2022
** B-CPE-100-PAR-1-1-Cworkshoplib-henry.letellier
** File description:
** int_to_hex.c
*/

#include <stdlib.h>
#include "my.h"

static char *convert_to_hex(int nbr, char *tmp)
{
    int i = 0;
    for (; nbr > 16; i++) {
        if ((nbr % 16) > 9) {
            tmp[i] = ('W' + (nbr % 16));
            nbr /= 16;
        } else {
            tmp[i] = ('0' + (nbr % 16));
            nbr /= 16;
        }
    }
    if (nbr <= 9) {
        tmp[i] = ('0' + nbr);
    } else {
        tmp[i] = ('W' + nbr);
    }
    tmp[i + 1] = '\0';
    return tmp;
}

char *int_to_hex(int nbr)
{
    char *nb = nb_to_char(nbr);
    int len = my_strlen(nb);
    char *tmp = malloc(sizeof(char) * (len * 2));

    free(nb);
    tmp = convert_to_hex(nbr, tmp);
    my_revstr(tmp);
    return (tmp);
}
