#!/usr/bin/python3
def uppercase(str):
    for j in range(len(str)):
        char = ord(str[j])
        if char >= 97 and char <= 122:
            char = char - 32
        print("{}".format(chr(char)), end="")
    print()
