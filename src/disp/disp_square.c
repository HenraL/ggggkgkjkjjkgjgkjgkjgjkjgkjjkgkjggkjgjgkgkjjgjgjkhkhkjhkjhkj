/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** disp_square.c
*/

#include <stddef.h>
#include "my.h"
#include "hl_struct.h"

static void disp_arr(new_biggest_square_t nbs, char *str, int x, int y)
{
    if (y >= nbs.y_pos_start && y <= nbs.y_pos_end) {
        if (x >= nbs.x_pos_start && x <= nbs.x_pos_end) {
            my_putchar('x');
        } else {
            my_putchar(str[x]);
        }
    } else {
        my_putchar(str[x]);
    }
}

void disp_square(new_biggest_square_t nbs, char *file_content)
{
    int y = 1;
    int x = 0;

    for (; file_content[x] != '\n'; x++) {
        continue;
    }

    x += 1;

    for (; file_content[x] != '\0'; x++) {
        if (file_content[x] == '\n') {
            y++;
        }
        disp_arr(nbs, file_content, x, y);
    }

}
