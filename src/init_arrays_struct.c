/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** init_arrays_struct.c
*/

#include <stdlib.h>
#include "src.h"
#include "my.h"
#include "hl_struct.h"
#include "err_struct.h"


array_t *init_arrays_struct(int width, int height)
{
    array_t *map = malloc(sizeof(array_t));
    int map_size = 0;
    map_size = (height * width);
    map->string = malloc(sizeof(char) * (map_size + 1));
    if (map->string == NULL) {
        my_putstr("(ias) (NULL)\n");
    }
    map->int_arr = malloc(sizeof(int *) * (height + 1));
    return map;
}
