/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** jitter jitter
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    if (len_s1 != len_s2) {
        return (len_s1 - len_s2);
    }
    for (; (s1[i] != '\0' && s2[i] != '\0') && i < n; i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return 0;
}
