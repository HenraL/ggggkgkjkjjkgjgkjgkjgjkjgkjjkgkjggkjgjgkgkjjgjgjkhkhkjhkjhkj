#!/bin/bash

bg="\033[1;40m"
ZERO="\033[30;${bg}"
ONE="\033[1;34m${bg}"
TWO="\033[1;32m${bg}"
THREE="\033[1;36m${bg}"
FOUR="\033[1;31m${bg}"
FIVE="\033[1;35m${bg}"
SIX="\033[1;33m${bg}"
SEVEN="\033[1;37m${bg}"
EIGHT="\033[1;90m${bg}"
NINE="\033[1;94m${bg}"
A="\033[1;92m${bg}"
B="\033[1;96m${bg}"
C="\033[1;91m${bg}"
D="\033[1;95m${bg}"
E="\033[1;93m${bg}"
F="\033[1;97m${bg}"
r="\033[1;0m${A}"

CODE_CHECKER=marvinette
CODING_REPORT="coding-style-reports.log"

function delay() {
    sleep 120s
}

function cleanup() {
    rm -f *.gcda
    rm -f *.gcno
}

function loop_compile() {
    I=1
    while [ $I -eq 1 ]
    do
        echo -e "${ONE}Cleaning previous compilation files...${r}"
        make fclean fclean_test
        echo -e "${TWO}Running the coding style checker...${r}"
        $CODE_CHECKER . .
        echo -e "${THREE}Displaying report...${SIX}"
        cat $CODING_REPORT
        echo -e "${FOUR}Re-compiling tests...${r}"
        make retest
        echo -e "${FIVE}Running tests...${r}"
        make run_tests
        echo -e "${SIX}Checking coverage...${r}"
        gcovr .
        echo -e "${SEVEN}Cleaning up files...${r}"
        cleanup
        echo -e "${EIGHT}Waiting the imposed delay...${r}"
        delay
        echo -e "${NINE}Repeating process...${r}"
    done
}

function program_help() {
    echo -e "${A}This is the $1 speaking:${r}"
    echo -e "In order to run me, please just call me, no need for any arguments"
    echo -ne "I have been coded to run based off of a makefile containing the "
    echo -e "following rules :\n-\t${ONE}all${r}\tcompile the program"
    echo -e "-\t${D}clean${r}\tremove all object files"
    echo -ne "-\t${THREE}fclean${r}\tCalls the clean rule as well as removing the "
    echo -e "executable\n-\t${FOUR}re${r}\tcalls the fclean and all rule."
    echo -e "-\t${FIVE}unit_test${r}\tcompile the program for unit testing with criterion"
    echo -e "-\t${SIX}run_tests${r}\trun the binary resulting from the unit_test rule"
    echo -ne "-\t${SEVEN}clean_test${r}\tcall the clean rule as well as remove all "
    echo -e ".gcno and all .gcda files."
    echo -ne "-\t${C}fclean_test${r}\tcall the clean_test rule as well as remove the "
    echo -e "unit_test binary."
    echo -e "-\t${NINE}retest${r}\tcalls the fclean_test and the unit_test rule"
    echo -ne "-\t${B}.PHONY${r} (optional)\tthis rule contains all the names of the "
    echo -ne "other rules created (this informs the makefile that these are"
    echo -e " rules and not files)."
}

function disclaimer() {
    echo -e "${SIX}!!${C} Disclaimer ${SIX}!!${r}"
    echo -e "${THREE}This program is provided as if and without any warranty."
    echo -e "${B}Use at your own risk!${r}\n"
}

echo -e "${r}${SIX}(c) Writtent by Henry Letellier${r}\n"
disclaimer
if [ $# -eq 1 ]
then
    program_help $0
else
    loop_compile "$1"
fi
echo -ne "\033[0;0m"
