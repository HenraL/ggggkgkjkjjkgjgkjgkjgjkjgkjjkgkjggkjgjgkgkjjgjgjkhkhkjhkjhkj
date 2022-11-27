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
#include "err_struct.h"
#include "error_constants.h"

static reset_pattern_tracker(int tracker, char *pattern)
{
    if (pattern[tracker] == '\0') {
        return 0;
    }
    return tracker;
}

static char *fill_the_map(char *result, char *pattern, int width, int height)
{
    int y = 0;
    int x = 0;
    int pattern_tracker = 0;

    for (; y < height; y++) {
        for (; x < width; x++) {
            pattern_tracker = reset_pattern_tracker(pattern_tracker, pattern);
            result[y + x] = pattern[pattern_tracker];
            pattern_tracker++;
        }
        result[y + x] = '\n';
    }
    return result;
}

static int check_pattern(char **argv, err_struct_t *es)
{
    char *generated_map;
    int width = 0;
    int height = 0;

    if (is_legal(argv[2], ".o\0") == false) {
        return display_correct_err_msg(illegal_chars, es);
    }

    width = hl_atoi(argv[1]);
    height = width;
    generated_map = malloc(sizeof(char) * ((height * width) + 1));

    if (generated_map == NULL) {
        return display_correct_err_msg(allocation_failed, es);
    }
    generated_map = fill_the_map(generated_map, argv[2], width, height);
    my_putstr("generated map = ");
    my_putstr(generated_map);
    my_putchar('\n');
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
    return success;
}
