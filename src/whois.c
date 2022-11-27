/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** whois.c
*/

int whois(char c)
{
    int dot = 1;
    int o = 0;
    if (c == '.') {
        return dot;
    }
    if (c == 'o') {
        return o;
    }
    return (int)c;
}
