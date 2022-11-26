/*
** EPITECH PROJECT, 2022
** my_get_nbr.c
** File description:
** jitter jitter
*/

#include <stdbool.h>

static int get_sign(char *str, int *i, int current_sing)
{
    int negative = current_sing;

    for (; str[*i] == '-' || str[*i] == '+'; (*i)++) {
        if (str[*i] == '-' && negative == true) {
            negative = false;
        } else {
            negative = true;
        }
    }
    return negative;
}

static int sing_accordingly(long int number, int is_negative)
{
    if (is_negative == true) {
        number *= (-1);
        return (int) number;
    }
    return (int) number;
}

int my_getnbr(char *str)
{
    int i = 0;
    long int number = 0;
    int is_negative = false;

    is_negative = get_sign(str, &i, is_negative);
    for (; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '+') {
            is_negative = get_sign(str, &i, is_negative);
        }
        if ((str[i] < '0') == true || (str[i] > '9') == true) {
            continue;
        }
        if (str[i] != '\0') {
            number += (str[i] - '0');
            number *= 10;
        }
    }

    return sing_accordingly(number, is_negative);
}
