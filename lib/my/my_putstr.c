/*
** EPITECH PROJECT, 2021
** Task02 - my_putstr.c
** File description:
** abc
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
