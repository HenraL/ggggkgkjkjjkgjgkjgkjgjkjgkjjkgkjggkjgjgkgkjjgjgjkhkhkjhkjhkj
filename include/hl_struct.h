/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-1-BSQ-henry.letellier
** File description:
** hl_struct.h
*/

#ifndef HL_STRUCT_H_
    #define HL_STRUCT_H_

typedef struct new_biggest_square_s {
    int y_pos_start;
    int x_pos_start;
    int y_pos_end;
    int x_pos_end;
    int size;
} new_biggest_square_t;

typedef struct biggest_square_s {
    int t_left_x;
    int t_left_y;
    int size;
} biggest_square_t;

typedef struct arrays_s {
    int **int_arr;
    char *string;
} array_t;

void hl_put_struct_content(biggest_square_t bst, char *name);
void hl_put_new_struct_content(new_biggest_square_t bst, char *name);
void disp_square(new_biggest_square_t nbs, char *file_content, int skip_line1);

int is_different(biggest_square_t cst, biggest_square_t pst);

new_biggest_square_t search_square(int **arr);
new_biggest_square_t init_new_bigest_square(int nb);

biggest_square_t init_biggest_square(int nb);
biggest_square_t find_biggest(int size, char **tab, int w, int h);
biggest_square_t is_findable(biggest_square_t bs, int *xyhw, int s, char **tab);

array_t *init_arrays_struct(int width, int height);

#endif
