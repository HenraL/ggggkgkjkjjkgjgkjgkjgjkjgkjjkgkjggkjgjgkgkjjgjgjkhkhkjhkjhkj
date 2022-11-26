/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** jitter jitter
*/

#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>

static int is_legal(char c)
{
    if ((c >= '0' && c <= '9') && (c >= 'a' && c <= 'z')) {
        return true;
    } else if (c >= 'A' && c <= 'Z') {
        return true;
    } else {
        return false;
    }
}

static int get_height(char *string)
{
    int i = 0;
    int height = 0;
    for (; string[i] != '\0'; i++) {
        if (is_legal(string[i]) == true) {
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

char **my_str_to_word_array(char *str)
{
    int height = get_height(str);
    int i = 0;
    int x = 0;
    int y = 0;
    char *sentence = malloc(sizeof(char) * get_line_length(str, 0) + 1);
    char **dest = malloc(sizeof(char *) * height + 1);

    for (; str[i] != '\0'; i++) {
        if (is_legal(str[i]) == false) {
            sentence[x] = '\0';
            dest[y++] = sentence;
            x = 0;
            sentence = malloc(sizeof(char) * get_line_length(str, i) + 1);
        } else {
            sentence[x++] = str[i];
        }
    }
    dest[y] = NULL;
    return dest;
}
