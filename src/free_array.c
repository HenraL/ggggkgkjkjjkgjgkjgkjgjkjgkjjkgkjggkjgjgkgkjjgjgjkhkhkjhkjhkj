/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** free_array.c
*/

#include <stdlib.h>
#include <stddef.h>

void free_array(int **arr)
{
    int i = 0;

    for (; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    free(arr);
}
