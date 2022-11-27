/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** disp_square.c
*/

#include <stddef.h>
#include <stdbool.h>
#include "my.h"
#include "hl_struct.h"

static void disp_arr(new_biggest_square_t nbs, char chr, int x, int y)
{
    if (y >= nbs.y_pos_start && y <= nbs.y_pos_end && chr != '\n') {
        if (x >= nbs.x_pos_start && x <= nbs.x_pos_end && chr != 'o') {
            my_putchar('x');
        } else {
            my_putchar(chr);
        }
    } else {
        my_putchar(chr);
    }
}

void disp_square(new_biggest_square_t nbs, char *file_content, int skip_line1)
{
    int y = 0;
    int x = 0;
    int i = 0;

    if (skip_line1 == true) {
        for (; file_content[i] != '\n'; i++) {
            continue;
        }
        i += 1;
        y++;
    }
    for (; file_content[i] != '\0'; i++, x++) {
        if (file_content[i] == '\n') {
            y += 1;
            x = (-1);
        }
        disp_arr(nbs, file_content[i], x, y);
    }
}
