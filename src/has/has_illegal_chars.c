/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** has_illegal_chars.c
*/

#include <stdbool.h>
#include "src.h"

static int is_char_illegal(char chr, char *authed_chars)
{
    int i = 0;
    int legal_found = false;

    for (; authed_chars[i] != '\0'; i++) {
        if (chr == authed_chars[i]) {
            legal_found = true;
            break;
        }
    }
    return legal_found;
}

int has_illegal_chars(char *str, char *authed_chars, int skip_line_one)
{
    int i = skip_first_line(str, skip_line_one);
    int is_legal = true;

    for (; str[i] != '\0'; i++) {
        is_legal = is_char_illegal(str[i], authed_chars);
        if (is_legal == false) {
            return true;
        }
    }
    return false;
}
