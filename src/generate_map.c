/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** generate_map.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include "my.h"
#include "src.h"
#include "constants.h"
#include "hl_struct.h"
#include "err_struct.h"
#include "error_constants.h"

static void find_and_show_square(array_t *arr)
{
    new_biggest_square_t bst = init_new_bigest_square(0);
    bst = search_square(arr->int_arr);
    disp_square(bst, arr->string, false);
    my_putstr("going_to_free\n");
    free_array(arr->int_arr);
    free(arr->string);
    free(arr);
}

static int reset_pattern_tracker(int tracker, char *pattern)
{
    if (pattern[tracker] == '\0') {
        return 0;
    }
    return tracker;
}

static array_t *fill_the_map(array_t *arr, char *pattern, int width, int height)
{
    int y = 0;
    int x = 0;
    int result_tracker = 2;
    int pattern_tracker = 0;

    for (; y < height; y++) {
        arr->int_arr[y] = malloc(sizeof(int) * width + 1);
        for (x = 0; x < width; x++) {
            pattern_tracker = reset_pattern_tracker(pattern_tracker, pattern);
            arr->string[result_tracker++] = pattern[pattern_tracker];
            arr->int_arr[y][x] = whois(pattern[pattern_tracker]);
            pattern_tracker++;
        }
        arr->string[result_tracker++] = '\n';
        arr->int_arr[y][x] = (-1);
    }
    arr->string[result_tracker] = '\0';
    my_putstr("arr->string = ");
    my_putstr(arr->string);
    my_putchar('\n');
    my_putstr("Pattern = '");
    my_putstr(pattern);
    my_putstr("'\n");
    arr->int_arr[y] = NULL;
    return arr;
}

static int check_pattern(char **argv, err_struct_t *es)
{
    array_t *arr;
    int width = hl_atoi(argv[1]);
    int height = width;
    my_putstr("vars loaded\nwidth = '");
    my_put_nbr(width);
    my_putstr("'\n");
    arr = init_arrays_struct(width, height);
    my_putstr("Struct initialised\n");
    if (arr->string == NULL || arr->int_arr == NULL) {
        return display_correct_err_msg(allocation_failed, es);
    }
    arr = fill_the_map(arr, argv[2], width, height);
    my_putstr("Map filled\n");
    for (int i = 0; arr->string[i] != '\0'; i++) {
        my_putchar(arr->string[i]);
    }
    find_and_show_square(arr);

    return success;
}

int generate_map(char **argv, err_struct_t *es)
{
    if (is_a_number(argv[1]) == false) {
        return display_correct_err_msg(is_not_a_nb, es);
    }
    if (is_signed_nb(argv[1]) == true) {
        return display_correct_err_msg(signed_nb_err, es);
    }
    if (is_a_float(argv[1]) == true) {
        return display_correct_err_msg(is_a_float_err, es);
    }
    if (is_legal(argv[2], ".o\0") == false) {
        return display_correct_err_msg(illegal_chars, es);
    }
    return check_pattern(argv, es);
}
