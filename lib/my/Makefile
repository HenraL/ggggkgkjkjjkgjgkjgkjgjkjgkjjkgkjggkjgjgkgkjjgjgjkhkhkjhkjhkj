##
## EPITECH PROJECT, 2022
## B-CPE-100-PAR-1-1-cpoolday10-henry.letellier
## File description:
## Makefile
##

SRC	=	my_swap.c	\
		my_isneg.c	\
		my_strlen.c	\
		my_strstr.c	\
		my_getnbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		int_to_hex.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		nb_to_char.c	\
		my_is_prime.c	\
		my_str_isnum.c	\
		my_strupcase.c	\
		concat_params.c	\
		my_strlowcase.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_putnbr_base.c	\
		my_strcapitalize.c	\
		my_sort_int_array.c	\
		my_find_prime_sup.c	\
		my_show_word_array.c	\
		my_str_isprintable.c	\
		my_chr_is_printrable.c	\
		my_str_to_word_array.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\


SILENT	=	@

CC	=	$(SILENT)gcc

RM	=	$(SILENT)rm -f

COPY	=	$(SILENT)cp

CPPFLAGS	=	-I./include

CFLAGS	=	-Wall -Wextra -lm

HEADERFILE	=	my.h

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME) update_archive update_includes

$(NAME):	$(OBJ)
	$(SILENT)ar rc $(NAME) $(OBJ)

update_archive:
	$(COPY) $(NAME) ../

update_includes:
	$(COPY) $(HEADERFILE) ../../include

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
