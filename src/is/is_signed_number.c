/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_signed_number.c
*/

#include <stdbool.h>
#include "src.h"

int is_signed_nb(char *file_content)
{
    if (file_content[0] == '-') {
        return true;
    }
    return false;
}
