/*
** EPITECH PROJECT, 2022
** my_showstr.c
** File description:
** jitter jitter
*/


#include <stdlib.h>
#include <stdbool.h>
#include "my.h"

int my_showstr(char const *str)
{
    int i = 0;
    char chr;
    char *hex_content;

    for (; str[i] != '\0'; i++) {
        chr = str[i];
        if (my_chr_isprintable(chr) == false) {
            my_putchar('/');
            hex_content = int_to_hex(chr);
            my_putstr(hex_content);
            free(hex_content);
        } else {
            my_putchar(str[i]);
        }
    }
    return 0;
}
