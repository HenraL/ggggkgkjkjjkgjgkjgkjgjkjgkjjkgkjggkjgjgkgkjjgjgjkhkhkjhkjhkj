/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_put_int_array.c
*/

#include <stddef.h>
#include <stdbool.h>
#include "my.h"

static void add_comma(int **arr, int x, int y, int horizontal)
{
    if (horizontal == true && (arr[y][x + 1] != (-1))) {
        my_putstr(", ");
    }
    if (horizontal == false && (arr[y + 1] != NULL)) {
        my_putstr("],\n");
    }
    if (horizontal == false && (arr[y + 1] == NULL)) {
        my_putstr("]\n");
    }
}

void hl_put_int_array(int **arr, char *name)
{
    int x = 0;
    int y = 0;
    
    my_putstr(name);
    my_putstr(" = \n[");
    
    for (; arr[y] != NULL; y++) {
        my_putstr("[");
        for (; arr[y][x] != (-1); x++) {
            my_put_nbr(arr[y][x]);
            add_comma(arr, x, y, true);
        }
        add_comma(arr, x, y, false);
    }
}