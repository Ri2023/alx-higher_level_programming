#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    value = 0
    try:
        for index in range(x):
            print(my_list[index], end='')
            value += 1
    except IndexError:
        None
    print()
    return value
