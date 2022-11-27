/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** err_struct.h
*/

#ifndef ERR_STRUCT_H_
#define ERR_STRUCT_H_

typedef struct err_struct_s {
    int err_id;
    void (*func)(void);
    int at_end;
} err_struct_t;

void fill_struct(err_struct_t *es);

int generate_map(char **argv, err_struct_t *es);
int has_to_little_args(int argc, err_struct_t *es);
int display_correct_err_msg(int err_nb, err_struct_t *es);
int is_solvable(char *file_content, int skip_line_one, err_struct_t *es);

#endif
