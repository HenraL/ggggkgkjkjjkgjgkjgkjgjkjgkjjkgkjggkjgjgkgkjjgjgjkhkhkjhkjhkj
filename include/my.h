/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** jitter jitter
*/

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr(char const *chr);
void my_putnbr_base(int nbr, char *base);
void my_sort_int_array(int *tab, int size);
void my_putptr_base(void *ptr, char *base);
void my_convertnbr_base_rec(int nbr, char *base, int base_len, char *str);

char *nb_to_char(int nb);
char *int_to_hex(int nbr);
char *my_revstr(char *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strdup(char const *src);
char *my_strcapitalize(char *str);
char **my_str_to_word_array(char *str);
char *concat_params(int argc, char **argv);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
char *my_strstr(char *str, char const *to_find);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strncat(char *dest, char const *src, int nb);

int my_isneg(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_showstr(char const *str);
int my_chr_isprintable(char str);
int my_str_isnum(char const *str);
int my_compute_square_root(int nb);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isalpha(char const *str);
int my_str_isprintable(char const *str);
int my_show_word_array(char * const *tab);
int my_showmem(char const *str, int size);
int my_compute_power_rec(int nb, int power);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
#endif
