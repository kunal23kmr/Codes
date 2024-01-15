''' Author: Kunal Kumar'''

import sys
import math
from collections import defaultdict, Counter

# Function to read input faster


def input():
    return sys.stdin.readline().rstrip()

# Function to perform task


def solve():
    n = input()
    cnt = sum([1 for c in n if c != '0'])
    # print(n[0])
    ans = n[0] if ((int(n[0]) < (9-int(n[0]))) or n[0]
                   == '9') else str(9-int(n[0]))
    for c in n[1:]:
        if cnt > 1 and (9-int(c) < int(c)):
            ans += str(9-int(c))
            cnt -= 1
        else:
            ans += c

    print(ans)


# Main function to run the program
if __name__ == '__main__':
    # Uncomment the following line if you want to read input from a file
    # sys.stdin = open('input.txt', 'r')

    # Uncomment the following line if you want to write output to a file
    # sys.stdout = open('output.txt', 'w')

    # Number of test cases
    # t = int(input())

    # # Iterate through each test case
    # for _ in range(t):
    solve()
