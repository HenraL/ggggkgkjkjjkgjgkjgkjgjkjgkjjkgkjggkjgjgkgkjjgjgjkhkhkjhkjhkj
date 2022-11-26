/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_only_o_s.c
*/

#include <stdbool.h>

#include "src.h"

int is_only_o_s(char *file_content, int skip_line_one)
{
    int i = skip_first_line(file_content, skip_line_one);

    for (; file_content[i] != '\0'; i++) {
        if (file_content[i] != 'o' && file_content[i] != '\n') {
            return false;
        }
    }
    return true;
}
