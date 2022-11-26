/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** search_square.c
*/

#include <stddef.h>
#include "hl_struct.h"

int find_smallest(int left, int top, int top_left, int c_int)
{
    if (top_left == 0) {
        return c_int;
    }
    if ((left > top_left) && (top > top_left)) {
        return top_left;
    }
    if ((top_left > left) && (top > left)) {
        return left;
    }
    if ((left > top) && (top_left > top)) {
        return top;
    }
    return c_int;
}

int **search_square(int **arr)
{
    int y = 1;
    int x = 1;
    int top = 0;
    int left = 0;
    int top_left = 0;
    int c_int = 0;
    for (; arr[y] != NULL; y++) {
        for (x = 1; arr[y][x] != (-1); x++) {
            top = arr[y - 1][x];
            left = arr[y][x - 1];
            top_left = arr[y - 1][x - 1];
            c_int = arr[y][x];
            arr[y][x] = find_smallest(left, top, top_left, c_int);
        }
    }
    return arr;
}
