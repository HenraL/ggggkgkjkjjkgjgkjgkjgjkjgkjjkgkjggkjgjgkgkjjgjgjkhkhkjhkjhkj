/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** sub_main.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include "my.h"
#include "src.h"
#include "constants.h"
#include "hl_struct.h"
#include "err_struct.h"
#include "error_constants.h"

static int process_content(char *file_content, err_struct_t *es)
{
    int status = success;
    int skip_line_one = true;
    char legal_chars[] = "o.\n\0";

    status = has_illegal_chars(file_content, legal_chars, skip_line_one);
    if (status == true) {
        return display_correct_err_msg(illegal_chars, es);
    }

    status = is_only_o_s(file_content, skip_line_one);
    if (status == true) {
        disp_without_nb(file_content);
        return success;
    }

    status = process_array(file_content);
    return status;
}

static int check_first_line(char *file_content, err_struct_t *es)
{
    int status = success;
    status = is_a_number(file_content);
    if (status == false) {
        return display_correct_err_msg(is_not_a_nb, es);
    }
    status = is_signed_nb(file_content);
    if (status == true) {
        return display_correct_err_msg(signed_nb_err, es);
    }
    status = is_a_float(file_content);
    if (status == true) {
        return display_correct_err_msg(is_a_float_err, es);
    }
    return process_content(file_content, es);
}

int sub_main(int argc, char **argv)
{
    int status = success;
    int nb_read_bytes = 0;
    char *file_content;
    err_struct_t es[nb_known_errs + 1];

    fill_struct(es);
    status = has_to_little_args(argc, es);
    if (status == err) {
        return status;
    }
    if (argc == 3) {
        return generate_map(argv, es);
    }
    file_content = get_file_content(argv[1], &nb_read_bytes, &status);
    if (status != success) {
        return display_correct_err_msg(status, es);
    }
    status = check_first_line(file_content, es);
    free(file_content);
    return status;
}
