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

void disp_square(biggest_square_t bst, char **tab);
void hl_put_struct_content(biggest_square_t bst, char *name);

int is_different(biggest_square_t cst, biggest_square_t pst);

biggest_square_t init_biggest_square(int nb);
biggest_square_t find_biggest(int size, char **tab, int w, int h);
biggest_square_t is_findable(biggest_square_t bs, int *xyhw, int s, char **tab);

#endif
