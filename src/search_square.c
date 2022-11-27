/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** search_square.c
*/

#include <stddef.h>
#include <stdbool.h>
#include "my.h"
#include "hl_struct.h"

static void update_structure(new_biggest_square_t *nbs, int **arr, int x, int y)
{
    if (arr[y][x] > nbs->size) {
        nbs->size = arr[y][x];
        nbs->x_pos_end = x;
        nbs->y_pos_end = y;
    }
}

static int **find_smallest(int **arr, int y, int x, new_biggest_square_t *nbs)
{
    //qsdsqdqsdsq
    int top = arr[y - 1][x];int left = arr[y][x - 1];
    int top_left = arr[y - 1][x - 1];
    if (top_left == 0)
        return arr;
    if ((left >= top_left) && (top >= top_left)) {
        arr[y][x] += top_left;
        update_structure(nbs, arr, x, y);
        return arr;
    }
    if ((top_left >= left) && (top >= left)) {
        arr[y][x] += left;
        update_structure(nbs, arr, x, y);
        return arr;
    }
    if ((left >= top) && (top_left >= top)) {
        arr[y][x] += top;
        update_structure(nbs, arr, x, y);
        return arr;
    }
    return arr;
}

new_biggest_square_t search_square(int **arr)
{
    int y = 2;
    int x = 1;

    new_biggest_square_t nbs = init_new_bigest_square(0);
    for (; arr[y] != NULL; y++) {
        for (x = 1; arr[y][x] != (-1); x++) {
            arr = find_smallest(arr, y, x, &nbs);
        }
    }
    nbs.x_pos_start = nbs.x_pos_end - (nbs.size - 1);
    nbs.y_pos_start = nbs.y_pos_end - (nbs.size - 1);
    return nbs;
}
