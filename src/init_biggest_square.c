/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** init_biggest_square.c
*/

#include "hl_struct.h"

biggest_square_t init_biggest_square(int nb)
{
    biggest_square_t bst;
    bst.t_left_x = nb;
    bst.t_left_y = nb;
    bst.size = nb;
    return bst;
}
