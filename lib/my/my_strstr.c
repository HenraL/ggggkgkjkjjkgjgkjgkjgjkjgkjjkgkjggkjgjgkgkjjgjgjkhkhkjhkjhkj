/*
** EPITECH PROJECT, 2022
** jj
** File description:
** dd
*/

#include <stdbool.h>
#include <stddef.h>
#include "my.h"

static int same_length(char *str, char const *needle, int i)
{
    int nb_same = 0;
    for (int j = 0; needle[j] != '\0'; j++) {
        if (str[i] == needle[j]) {
            nb_same++;
        } else {
            return nb_same;
        }
        i++;
    }
    return nb_same;
}

char *my_strstr(char *str, char const *to_find)
{
    int max_length = my_strlen(to_find);
    int i = 0;
    int combo = 0;
    for (; str[i] != '\0'; i++) {
        combo = same_length(str, to_find, i);
        if (combo == max_length) {
            return &str[i];
        }
    }
    return (char *)NULL;
}
