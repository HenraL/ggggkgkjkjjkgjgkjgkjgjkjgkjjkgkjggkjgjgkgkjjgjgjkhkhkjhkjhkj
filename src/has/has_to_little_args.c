/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** has_to_little_args.c
*/

#include "my.h"
#include "constants.h"
#include "err_struct.h"
#include "error_constants.h"

int has_to_little_args(int argc, err_struct_t *es)
{
    if (argc < 2) {
        return display_correct_err_msg(to_little_args, es);
    }
    return success;
}
