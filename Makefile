##
## EPITECH PROJECT, 2022
## B-CPE-101-PAR-1-1-myprintf-henry.letellier
## File description:
## Makefile
##

CODE_ACCESS_FOLDER	=	src/

IS_CODE_ACCESS_FOLDER	=	$(CODE_ACCESS_FOLDER)is/
GET_CODE_ACCESS_FOLDER	=	$(CODE_ACCESS_FOLDER)get/
HAS_CODE_ACCESS_FOLDER	=	$(CODE_ACCESS_FOLDER)has/
FILE_CODE_ACCESS_FOLDER	=	$(CODE_ACCESS_FOLDER)file/
DISP_CODE_ACCESS_FOLDER	=	$(CODE_ACCESS_FOLDER)disp/

LIBMY_ACCESS_FOLDER	=	lib/my/

MAIN_FILE	=	main.c

SRC	=	$(CODE_ACCESS_FOLDER)sub_main.c	\
		$(CODE_ACCESS_FOLDER)free_array.c	\
		$(CODE_ACCESS_FOLDER)hl_put_bool.c	\
		$(CODE_ACCESS_FOLDER)fill_struct.c	\
		$(CODE_ACCESS_FOLDER)search_square.c	\
		$(CODE_ACCESS_FOLDER)skip_first_line.c	\
		$(CODE_ACCESS_FOLDER)init_biggest_square.c	\
		$(CODE_ACCESS_FOLDER)hl_str_to_int_array.c	\
		$(CODE_ACCESS_FOLDER)hl_str_to_word_array.c	\
		$(CODE_ACCESS_FOLDER)hl_put_struct_content.c	\


FILE_SRC	=	$(FILE_CODE_ACCESS_FOLDER)file_close.c	\
				$(FILE_CODE_ACCESS_FOLDER)file_open.c	\

GET_SRC	=	$(GET_CODE_ACCESS_FOLDER)get_filesize.c	\
			$(GET_CODE_ACCESS_FOLDER)get_file_content.c	\

HAS_SRC	=	$(HAS_CODE_ACCESS_FOLDER)has_illegal_chars.c	\
			$(HAS_CODE_ACCESS_FOLDER)has_to_little_args.c	\

IS_SRC	=	$(IS_CODE_ACCESS_FOLDER)is_a_float.c	\
			$(IS_CODE_ACCESS_FOLDER)is_solvable.c	\
			$(IS_CODE_ACCESS_FOLDER)is_findable.c	\
			$(IS_CODE_ACCESS_FOLDER)is_only_o_s.c	\
			$(IS_CODE_ACCESS_FOLDER)is_a_number.c	\
			$(IS_CODE_ACCESS_FOLDER)is_different.c	\
			$(IS_CODE_ACCESS_FOLDER)is_only_dots.c	\
			$(IS_CODE_ACCESS_FOLDER)is_correct_size.c	\
			$(IS_CODE_ACCESS_FOLDER)is_signed_number.c	\

DISP_SRC	=	$(DISP_CODE_ACCESS_FOLDER)disp_is_o_s.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_nb_err.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_square.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_is_dots.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_float_err.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_empty_file.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_without_nb.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_broken_file.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_unknown_err.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_illegal_chars.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_to_little_args.c	\
				$(DISP_CODE_ACCESS_FOLDER)disp_unsigned_nb_err.c	\
				$(DISP_CODE_ACCESS_FOLDER)display_correct_err_msg.c	\

SILENT	=	@

CC	=	$(SILENT)gcc

RM	=	$(SILENT)rm -f

COPY_FILE	=	$(SILENT)cp -uf

CPPFLAGS	=	-I./include

CFLAGS	=	-Wall -Wextra -lm  -g3

EPI_STANDARD	=	-std=c99

PREV_STANDARD	=	-std=c90

PROG_SRC	=	$(SRC)
PROG_SRC	+=	$(IS_SRC)
PROG_SRC	+=	$(HAS_SRC)
PROG_SRC	+=	$(GET_SRC)
PROG_SRC	+=	$(FILE_SRC)
PROG_SRC	+=	$(DISP_SRC)

PROG_OBJ	=	$(PROG_SRC:.c=.o)

MAIN_FILE_OBJ = $(MAIN_FILE:.c=.o)

LIB	=	-L./lib/my -lmy

UNIT_FILE	=	tests/test_bsq.c

UNIT_FLAG	=	--coverage -lcriterion

UNIT_NAME	=	unit_tests

NAME	=	bsq

all: $(NAME)

$(NAME):	compile_libs update_dep $(PROG_OBJ) $(MAIN_FILE_OBJ)
	$(CC) -o $(NAME) $(PROG_OBJ) $(LIB) $(CPPFLAGS) $(CFLAGS) $(MAIN_FILE_OBJ)

update_dep:
	$(COPY_FILE) lib/my/my.h include/

compile_libs:
	make -C lib/my

as_c99: CFLAGS	+=	$(EPI_STANDARD)
as_c99: all

as_C90: CFLAGS	+=	$(PREV_STANDARD)
as_C90: all

for_unit_testing: compile_libs update_dep $(PROG_OBJ)
	$(CC) -o $(UNIT_NAME) $(PROG_OBJ) $(UNIT_FILE) $(LIB) $(CFLAGS) \
	$(CPPFLAGS) $(UNIT_FLAG)

clean_test:
	$(RM) *.gcda
	$(RM) *.gcno

clean_coverage:
	$(RM) *.html
	$(RM) *.css

clean_libs:
	make -C lib/my clean

clean: clean_coverage clean_test clean_libs
	$(RM) $(PROG_OBJ)
	$(RM) $(INNER_LIBS_OBJ)
	$(RM) main.o

fclean_libs: clean_libs
	@make -C lib/my fclean

fclean: clean fclean_libs
	$(RM) $(NAME)

fclean_test: clean_test
	$(RM) $(UNIT_NAME)

unit_tests: fclean_test for_unit_testing

run_tests:
	./$(UNIT_NAME)

test_coverage:	unit_tests run_tests
	@gcovr .

test_run: test_coverage

tests_run: test_coverage

re: fclean all

recov: fclean test_coverage

retest: fclean_test for_unit_testing

restandard: fclean fclean_launcher fclean_test as_c99 for_unit_testing

.PHONY: all update_dep compile_libs	\
		as_c99 as_C90	\
		for_unit_testing	\
		clean_test clean_coverage clean_libs clean	\
		fclean_libs fclean_test fclean	\
		unit_tests run_tests test_coverage test_run	\
		re recov retest restandard
