/*
** EPITECH PROJECT, 2022
** my_comput_square_root.c
** File description:
** jitter jitter
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    if (nb < 0) {
        return 0;
    }
    for ( ; (i * i) != nb; i++) {
        if (i > nb) {
            return 0;
        }
    }
    return i;
}
