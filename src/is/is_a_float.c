/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** is_a_float.c
*/

#include <stdbool.h>

int is_a_float(char *file_content)
{
    int i = 0;
    for (; file_content[i] != '\n' && file_content[i] != '\0'; i++) {
        if (file_content[i] == '.') {
            return true;
        }
    }
    return false;
}
