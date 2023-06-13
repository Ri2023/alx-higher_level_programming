#!/usr/bin/python3

import random
number = random.randint(-10000, 10000)
first_str = " and is greater than 5"
second_str = " and is 0"
third_str = " and is less than 6 and not 0"
if number < 0:
    last = number % -10
else:
    last = number % 10
if last > 5:
    print("Last digit of {} is {}".format(number, last) + first_str)
elif last == 0:
    print("Last digit of {} is {}".format(number, last) + second_str)
else:
    print("Last digit of {} is {}".format(number, last) + third_str)
