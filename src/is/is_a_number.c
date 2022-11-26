/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_a_number.c
*/

#include <stdbool.h>
#include "src.h"

static int char_is_numeric(char chr)
{
    if ((chr >= '0' && chr <= '9') || chr == '-' || chr == '.') {
        return true;
    }
    return false;
}

int is_a_number(char *file_content)
{
    int is_a_number = true;
    int i = 0;

    for (; file_content[i] != '\n' && file_content[i] != '\0'; i++) {
        is_a_number = char_is_numeric(file_content[i]);
        if (is_a_number == false) {
            return false;
        }
    }
    return true;
}
