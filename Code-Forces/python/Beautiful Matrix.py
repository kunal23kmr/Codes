''' Author: Kunal Kumar'''

import sys
import math
from collections import defaultdict, Counter

# Function to read input faster


def input():
    return sys.stdin.readline().rstrip()

# Function to perform task


def solve():
    s = ''
    for _ in range(5):
        s += input()
    i = s.replace(' ', '').index('1')
    # i = s.index('1')
    row,col = i//5 , i%5
    # print(row,col)
    print(abs(2-row)+abs(2-col))
    pass


# Main function to run the program
if __name__ == '__main__':
    # Uncomment the following line if you want to read input from a file
    # sys.stdin = open('input.txt', 'r')

    # Uncomment the following line if you want to write output to a file
    # sys.stdout = open('output.txt', 'w')

    # Number of test cases
    # t = int(input())

    # Iterate through each test case
    # for _ in range(t):
    solve()
