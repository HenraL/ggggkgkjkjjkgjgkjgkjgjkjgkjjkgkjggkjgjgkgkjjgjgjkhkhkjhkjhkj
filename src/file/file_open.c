/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** file_open.c
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "constants.h"

int file_open(char *filename)
{
    int file_descriptor = 0;
    file_descriptor = open(filename, O_RDWR | O_NONBLOCK);
    if (file_descriptor == -1) {
        return err;
    }
    return file_descriptor;
}
