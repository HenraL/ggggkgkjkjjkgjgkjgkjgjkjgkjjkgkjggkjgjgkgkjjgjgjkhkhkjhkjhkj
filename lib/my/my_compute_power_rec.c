/*
** EPITECH PROJECT, 2022
** my_comput_power_rec.c
** File description:
** jitter jitter
*/

#include "my.h"

static int reccur_it(int nb, int p, int result, int i)
{
    if ( i >= p) {
        return result;
    }
    return reccur_it(nb, p, (result * nb), i + 1);
}

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0 || nb == 0) {
        return 0;
    }
    return reccur_it(nb, p, 1, 0);
}
