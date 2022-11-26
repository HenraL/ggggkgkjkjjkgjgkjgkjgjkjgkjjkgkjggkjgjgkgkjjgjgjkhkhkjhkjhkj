/*
** EPITECH PROJECT, 2021
** Task0? - my_sort_int_array.c
** File description:
** abc
*/

#include "my.h"

static void my_sort_int_array_ovf(int *is_sorted, int *tab, int i, int size)
{
    for (;(i + 1) < size; i++) {
        if (tab[i] > tab[i + 1]) {
            (*is_sorted)--;
            my_swap(&tab[i], &tab[i + 1]);
        }
    }
}

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int nb = 0;
    int is_sorted = 1;

    for (; is_sorted == 0; nb++) {
        i = 0;
        is_sorted = 1;
        my_sort_int_array_ovf(&is_sorted, tab, i, size);
    }
}
