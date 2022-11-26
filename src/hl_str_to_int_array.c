/*
** EPITECH PROJECT, 2022
** hl_str_to_int_array.c
** File description:
** jitter jitter
*/

#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include "my.h"

static int whois(char c)
{
    int dot = 1;
    int o = 0;
    if (c == '.') {
        return dot;
    }
    if (c == 'o') {
        return o;
    }
    return (int)c;
}

static int is_legal(char c)
{
    if (c == '\n' || c == '\0') {
        return false;
    }
    return true;
}

static int get_height(char *string)
{
    int i = 0;
    int height = 0;
    int it_is_legal = true;

    for (; string[i] != '\0'; i++) {
        it_is_legal = is_legal(string[i]);
        if (it_is_legal == false) {
            height++;
        }
    }
    return height;
}

static int get_line_length(char *str, int istart)
{
    int length = 0;
    int i = istart;
    int it_is_legal = true;

    for (; it_is_legal == true; i++) {
        it_is_legal = is_legal(str[i]);
        if (it_is_legal == true) {
            length++;
        }
    }
    return length;
}

int **hl_str_to_int_array(char *str, int *total_width, int *total_height)
{
    int i = 0;int x = 0;int y = 0;
    int line_length = get_line_length(str, 0);
    int **dest = malloc(sizeof(int *) * (get_height(str) + 1));
    dest[0] = malloc(sizeof(int) * (line_length + 1));
    for (; str[i] != '\0'; i++) {
        if (is_legal(str[i]) == false) {
            dest[y][x] = (-1);
            y++;
            *total_width = x;
            x = 0;
            dest[y] = malloc(sizeof(int) * (get_line_length(str, i + 1) + 1));
        } else {
            dest[y][x++] = whois(str[i]);
        }
    }
    *total_height = y;
    dest[y][x] = (-1);
    dest[y] = NULL;
    return dest;
}
