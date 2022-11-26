/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** jitter jitter
*/

#include <stdlib.h>
#include "my.h"

static int tot_argv_len(int argc, char **argv)
{
    int tot_len = argc;
    int i = 0;
    for (; i < argc; i++) {
        tot_len += my_strlen(argv[i]);
    }
    return tot_len;
}

char *concat_params(int argc, char **argv)
{
    int tot_len_argv = tot_argv_len(argc, argv);
    char *dest = malloc(sizeof(char) * tot_len_argv);
    int i = 0;
    for (; i < argc; i++) {
        my_strcat(dest, (char const *) argv[i]);
        my_strcat(dest, "\n");
    }
    return dest;
}
