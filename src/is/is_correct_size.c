/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_correct_size.c
*/

#include <stdbool.h>
#include <stddef.h>
#include "my.h"
#include "error_constants.h"

static int is_illegal(int x, int size, int h, char **tab)
{
    int j = 0;
    for (; j < size; j++) {
        if (tab[h][x + j] == 'o') {
            return true;
        }
        if (tab[h][x + j] == '\0') {
            return false;
        }
    }
    return false;
}

int is_correct_size(int const x, int const y, int size, char **tab)
{
    int i = 0;
    for (; i < size; i++) {
        if (tab[y + i] == NULL) {
            return false;
        }
        if (is_illegal(x, size, (y + i), tab) == true) {
            return false;
        }
    }
    return true;
}
