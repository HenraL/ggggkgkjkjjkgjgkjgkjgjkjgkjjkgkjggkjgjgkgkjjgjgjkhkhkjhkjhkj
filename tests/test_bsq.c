/*
** EPITECH PROJECT, 2022
** B-CPE-101-PAR-1-1-bsminiprintf-henry.letellier
** File description:
** test_mini_printf.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "src.h"
#include "constants.h"

// redirecting the visual outputs
void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

// Testing the displayed content
Test(sub_main, simple_string, .init = redirect_all_std)
{
    int argc = 1;
    char *argv[] = { "./a.out", "o" };
    sub_main(argc, argv);
    cr_assert_stdout_eq_str("FATAL ERROR: No file found.\nPlease enter the file to be read from.\n");
}

// Testing program's response
Test(my_printf, simple_string_count, .init = redirect_all_std)
{
    int argc = 1;
    int status = success;
    char *argv[] = { "./a.out", "o" };
    status = sub_main(argc, argv);
    cr_assert_eq(status, err, "Got %d, but expected %d.\n");
}

// Test(my_printf, string_unknown_param, .init = redirect_all_std)
// {
//     int status = 0;
//     status = my_printf("hello world %é");
//     cr_assert_eq(status, -1, "Got %d, but expected %d.\n");
// }
