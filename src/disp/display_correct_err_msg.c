/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** display_correct_err_msg.c
*/

#include <stdbool.h>
#include "my.h"
#include "src.h"
#include "constants.h"
#include "err_struct.h"
#include "error_constants.h"

int display_correct_err_msg(int err_nb, err_struct_t *es)
{
    int i = 0;
    for (; es[i].at_end != true; i++) {
        if (es[i].err_id == err_nb) {
            es[i].func();
            return err;
        }
    }
    disp_unknown_err();
    return err;
}
