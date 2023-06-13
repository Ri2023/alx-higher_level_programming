#!/usr/bin/python3
def weight_average(my_list=[]):
    increase = 0
    decrease = 0
    if my_list:
        for x in range(len(my_list)):
            increase += my_list[x][0] * my_list[x][1]
            decrease += my_list[x][1]
        average = increase / decrease
        return average
    else:
        return 0
