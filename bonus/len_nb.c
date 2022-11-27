/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** len_nb.c
*/

int len_nb(int nb)
{
    int i = 0;
    if (nb < 0) {
        nb *= (-1);
    }
    if (nb < 10 && nb > -1) {
        return 1;
    }
    while (nb > 0) {
        i++;
        nb /= 10;
    }
    return i;
}
