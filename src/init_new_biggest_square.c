/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** init_new_biggest_square.c
*/

#include "hl_struct.h"

new_biggest_square_t init_new_bigest_square(int nb)
{
    new_biggest_square_t nbs;
    nbs.size = nb;
    nbs.x_pos_end = nb;
    nbs.y_pos_end = nb;
    nbs.x_pos_start = nb;
    nbs.y_pos_start = nb;
    return nbs;
}
