/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** file_close.c
*/

#include <unistd.h>
#include "constants.h"


int file_close(int file_descriptor)
{
    int response = close(file_descriptor);
    if (response == (-1)) {
        return err;
    }
    return success;
}
