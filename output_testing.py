
def my_putchar(char):
    print(char, end="")

input_array  = [
    ['.','o','.','.','.'],
    ['.','o','.','.','.'],
    ['.','o','.','.','.'],
    ['.','o','.','.','.'],
    ['.','o','.','.','.']
    ]

x_start = 2
x_end = 4

y_offset = 1
y_start = 1 - y_offset
y_end = 3 - y_offset

for y in range(len(input_array)):
    for x in range(len(input_array[y])):
        if (y >= y_start and y <= y_end):
            if (x >= x_start and x <= x_end):
                my_putchar('x')
            else:
                my_putchar(input_array[y][x])
        else:
            my_putchar(input_array[y][x])
    my_putchar('\n')

my_putchar("\n\n\n\n")

input_string = """.o...
.o...
.o...
.o...
.o...
"""

y = 0
x = 0


for i in input_string:
    if i == '\n':
        y += 1
        x = 0

    if (y >= y_start and y <= y_end):
        if (x >= x_start and x <= x_end):
            my_putchar('x')
        else:
            my_putchar(i)
    else:
        my_putchar(i)
    
    if i != '\n':
        x += 1
