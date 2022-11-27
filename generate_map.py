from sys import argv, exit

argc = len(argv)

def is_legal(str, verif_str):
    has_been_found = False
    for i in str:
        has_been_found = False
        for j in verif_str:
            if i == j:
                has_been_found = True
                break
        if has_been_found == False:
            return False
    return True

if (argc != 3):
    exit(84)

if (argv[1].isdigit() == False):
    exit(84)

if (is_legal(argv[2], "o.\0") == False):
    exit(84)

width = int(argv[1])
height = int(argv[1])
tracker = 0

list_length = len(argv[2])

result = str()

for i in range(height):
    for j in range(width):
        if (tracker == list_length):
            tracker = 0
        result += argv[2][tracker]
        tracker+=1
    result += '\n'

print(result, end="")
