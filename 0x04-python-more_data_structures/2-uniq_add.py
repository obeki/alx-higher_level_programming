#!/usr/bin/python3
def uniq_add(my_list=[]):
    my_set = set(my_list)
    result = 0
    for i in my_set:
        result = result + i
    return result
