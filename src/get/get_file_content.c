/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** get_file_content.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

#include "my.h"
#include "src.h"
#include "constants.h"
#include "error_constants.h"

char *get_file_content(char *filename, int *nb_read_bytes, int *status)
{
    int file_descriptor = file_open(filename);
    int filesize = 0;
    char *result;

    *status = success;
    *nb_read_bytes = 0;
    if (file_descriptor == err) {
        *status = broken_file;
        return "error";
    }
    filesize = get_filesize((const char *)filename);
    if (filesize < 1) {
        *status = empty_file;
        return "error";
    }
    result = malloc(sizeof(char) * (filesize + 1));
    *nb_read_bytes = read(file_descriptor, result, filesize);
    *status = file_close(file_descriptor);
    return result;
}
