/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** disp_without_nb.c
*/

#include <stdbool.h>

#include "my.h"
#include "src.h"

void disp_without_nb(char *file_content)
{
    int i = skip_first_line(file_content, true);
    for (; file_content[i] != '\0'; i++) {
        my_putchar(file_content[i]);
    }
}
