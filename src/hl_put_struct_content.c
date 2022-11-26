/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_put_struct_content.c
*/

#include "my.h"
#include "hl_struct.h"

void hl_put_struct_content(biggest_square_t bst, char *name)
{
    my_putstr(name);
    my_putstr(".t_left_x = '");
    my_put_nbr(bst.t_left_x);
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".t_left_y  = '");
    my_put_nbr(bst.t_left_y );
    my_putstr("'\n");
    my_putstr(name);
    my_putstr(".size = '");
    my_put_nbr(bst.size);
    my_putstr("'\n");
}
