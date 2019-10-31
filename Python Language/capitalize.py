#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    new_lst = list()
    s = s.split(" ")
    for item in s:
        item = item.capitalize()
        new_lst.append(item)
    new_string = " ".join(new_lst)
    print(new_string)
    return new_string

if __name__ == '__main__':
