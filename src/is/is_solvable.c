/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_solvable.c
*/

#include <stdbool.h>

#include "my.h"
#include "src.h"
#include "constants.h"
#include "err_struct.h"
#include "error_constants.h"

int is_solvable(char *file_content, int skip_line_one, err_struct_t *es)
{
    int status = false;

    status = is_only_dots(file_content, skip_line_one);
    if (status == true) {
        return display_correct_err_msg(is_dots, es);
    }
    return success;
}
