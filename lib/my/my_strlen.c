/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** jitter jitter
*/

int my_strlen(char const *chr)
{
    int i = 0;
    int counter = 0;
    for (; chr[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}
