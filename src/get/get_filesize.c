/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** get_filesize.c
*/

#include <sys/stat.h>

int get_filesize(const char *filepath)
{
    struct stat st;
    if (stat(filepath, &st) != 0) {
        return (-1);
    }
    return st.st_size;
}
