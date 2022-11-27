/*
** EPITECH PROJECT, 2022
** ggggkgkjkjjkgjgkjgkjgjkjgkjjkgkjggkjgjgkgkjjgjgjkhkhkjhkjhkj
** File description:
** is_legal.c
*/

#include <stdbool.h>
#include "src.h"

static int is_char_legal(char chr, char *verif_str)
{
    int j = 0;
    int has_been_found = false;

    for (; verif_str[j] != '\0'; j++) {
        if (chr == verif_str[j]) {
            has_been_found = true;
            break;
        }
    }
    return has_been_found;
}

int is_legal(char *str, char *verif_str)
{
    int i = 0;
    int has_been_found = false;

    for (; str[i] != '\0'; i++) {
        has_been_found = is_char_legal(str[i], verif_str);
        if (has_been_found == false) {
            return false;
        }
    }
    return true;
}
