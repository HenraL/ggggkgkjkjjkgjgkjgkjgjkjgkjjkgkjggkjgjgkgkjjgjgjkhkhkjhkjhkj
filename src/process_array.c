/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** process_array.c
*/

#include <stdbool.h>
#include "src.h"
#include "my.h"
#include "hl_struct.h"
#include "constants.h"

int process_array(char *file_content)
{
    int width = 0;
    int height = 0;
    int **arr;
    new_biggest_square_t bst = init_new_bigest_square(0);
    arr = hl_str_to_int_array(file_content, &width, &height);
    bst = search_square(arr);
    disp_square(bst, file_content, true);
    free_array(arr);
    return success;
}
