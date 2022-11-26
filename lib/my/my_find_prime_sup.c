/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** jitter jitter
*/

#include <stdbool.h>

static int is_prime(int nb)
{
    int i = 2;
    int max_stopping = (nb / 2) + 1;
    if (nb <= 1) {
        return false;
    }
    for (; i < max_stopping; i++) {
        if (nb % i == 0) {
            return false;
        }
    }
    return true;
}

int my_find_prime_sup(int nb)
{
    int i = nb;
    int response = 0;

    while (response != 1) {
        if (is_prime(i) == 1) {
            return i;
        }
        i++;
    }
    return i;
}
