/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** jitter jitter
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;
    for (; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
