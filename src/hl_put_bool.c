/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_put_bool.c
*/

#include <stdbool.h>
#include "my.h"

void hl_putbool(int bool_val, char *name)
{
    my_putstr(name);
    my_putstr(" = ");
    if (bool_val == true) {
        my_putstr("true");
    } else {
        my_putstr("false");
    }
    my_putchar('\n');
}
