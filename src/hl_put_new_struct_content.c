/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_put_struct_content.c
*/

#include "my.h"
#include "hl_struct.h"

void hl_put_new_struct_content(new_biggest_square_t bst, char *name)
{
    my_putstr(name);
    my_putstr(".x_pos_end = '");
    my_put_nbr(bst.x_pos_end);
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".y_pos_end  = '");
    my_put_nbr(bst.y_pos_end);
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".size = '");
    my_put_nbr(bst.size);
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".x_pos_start  = '");
    my_put_nbr(bst.x_pos_start);
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".y_pos_start  = '");
    my_put_nbr(bst.y_pos_start);
    my_putstr("'\n");
}
