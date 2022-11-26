/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** skip_first_line.c
*/

#include <stdbool.h>

int skip_first_line(char *file_content, int skip_line_one)
{
    int i = 0;
    int buffer = 0;
    if (skip_line_one == true) {
        for (; file_content[i] != '\n' && file_content[i] != '\0'; i++) {
            buffer++;
        }
    }
    return i;
}
