/*
** EPITECH PROJECT, 2022
** B-CPE-100-PAR-1-1-Cworkshoplib-henry.letellier
** File description:
** my_chr_is_printrable.c
*/

#include <stdbool.h>

int my_chr_isprintable(char str)
{
    if (str >= ' ' && str <= '~') {
        return true;
    } else {
        return false;
    }
}
