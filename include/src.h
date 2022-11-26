/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** src.h
*/

#ifndef SRC_H_
    #define SRC_H_

void disp_is_o_s(void);
void disp_nb_err(void);
void disp_is_dots(void);
void disp_float_err(void);
void disp_empty_file(void);
void free_array(char **arr);
void disp_unknown_err(void);
void disp_broken_file(void);
void disp_illegal_chars(void);
void disp_to_little_args(void);
void disp_unsigned_nb_err(void);
void hl_put_int_array(int **arr);
void disp_without_nb(char *file_content);
void hl_putbool(int bool_val, char *name);

int file_open(char *filename);
int is_a_float(char *file_content);
int sub_main(int argc, char **argv);
int file_close(int file_descriptor);
int is_a_number(char *file_content);
int is_signed_nb(char *file_content);
int get_filesize(const char *filepath);
int is_only_o_s(char *file_content, int skip_line_one);
int is_only_dots(char *file_content, int skip_line_one);
int skip_first_line(char *file_content, int skip_line_one);
int is_correct_size(int const x, int const y, int size, char **tab);
int has_illegal_chars(char *str, char *authed_chars, int skip_first_line);

int **search_square(int **arr);
int **hl_str_to_int_array(char *str, int *total_width, int *total_height);

char *get_file_content(char *filename, int *nb_read_bytes, int *status);

char **hl_str_to_word_array(char *str, int *total_width, int *total_height);
#endif
