/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_different.c
*/

#include <stdbool.h>
#include "hl_struct.h"

int is_different(biggest_square_t cst, biggest_square_t pst)
{
    if (cst.size != pst.size || cst.t_left_x != pst.t_left_x) {
        return true;
    }
    if (cst.size != pst.size) {
        return true;
    }
    return false;
}
