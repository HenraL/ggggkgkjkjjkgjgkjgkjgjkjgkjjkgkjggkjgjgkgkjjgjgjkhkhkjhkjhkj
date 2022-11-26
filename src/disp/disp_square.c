/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** disp_square.c
*/

#include <stddef.h>
#include "my.h"
#include "hl_struct.h"

static void who_to_display(biggest_square_t bst, char **tab, int x, int y)
{
    int size = bst.size;
    int o_x = size + bst.t_left_x;
    int o_y = size + bst.t_left_y;
    if ((y >= bst.t_left_y && y <= o_y) && (x >= bst.t_left_x && x <= o_x)) {
        my_putchar('x');
    } else {
        my_putchar(tab[y][x]);
    }
}

void disp_square(biggest_square_t bst, char **tab)
{
    int y = 1;
    int x = 0;

    for (; tab[y] != NULL; y++) {
        for (x = 0; tab[y][x] != '\0'; x++) {
            who_to_display(bst, tab, x, y);
        }
        my_putchar('\n');
    }
}
