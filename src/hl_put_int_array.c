/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_put_int_array.c
*/

#include <stddef.h>
#include <stdbool.h>
#include "my.h"

void hl_put_int_array(int **arr, char *name)
{
    my_putstr(name);
    my_putstr(" = \n");
    for (int yl = 0; arr[yl] != NULL; yl++) {
        for (int xl = 0; arr[yl][xl] != (-1); xl++) {
            my_put_nbr(arr[yl][xl]);
        }
        my_putchar('\n');
    }
}
