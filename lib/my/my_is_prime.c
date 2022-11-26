/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** jitter jitter
*/

#include <stdbool.h>

int my_is_prime(int nb)
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
