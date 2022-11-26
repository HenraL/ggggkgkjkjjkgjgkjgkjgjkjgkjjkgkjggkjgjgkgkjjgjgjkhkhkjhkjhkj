/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** fill_struct.c
*/

#include <stdbool.h>
#include "src.h"
#include "err_struct.h"
#include "error_constants.h"

static void add_node(err_struct_t *es, int pos, int err_id, void (*func)(void))
{
    es[pos].err_id = err_id;
    es[pos].func = func;
    es[pos].at_end = false;
}

void fill_struct(err_struct_t *es)
{
    add_node(es, 0, is_o_s, &disp_is_o_s);
    add_node(es, 1, is_dots, &disp_is_dots);
    add_node(es, 2, is_not_a_nb, &disp_nb_err);
    add_node(es, 3, empty_file, &disp_empty_file);
    add_node(es, 4, broken_file, &disp_broken_file);
    add_node(es, 5, is_a_float_err, &disp_float_err);
    add_node(es, 6, illegal_chars, &disp_illegal_chars);
    add_node(es, 7, to_little_args, &disp_to_little_args);
    add_node(es, 8, signed_nb_err, &disp_unsigned_nb_err);

    es[9].at_end = true;
}
