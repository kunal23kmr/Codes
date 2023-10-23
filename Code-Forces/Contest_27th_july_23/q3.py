# def solve():
#     t = int(input())

#     for _ in range(t):
#         n, m = map(int, input().split())
#         s = input()

#         unique_strings = set()

#         for _ in range(m):
#             li, ri = map(int, input().split())
#             ti = sorted(s[li - 1:ri])  # Sorting the substring [li, ri]
#             unique_strings.add(s[:li - 1] + ''.join(ti) + s[ri:])

#         print(len(unique_strings))

# solve()

def nCr(n, r):
    # Calculate nCr using combinatorics
    res = 1
    r = min(r, n - r)
    for i in range(r):
        res *= (n - i)
        res //= (i + 1)
    return res

def solve():
    t = int(input())

    for _ in range(t):
        n, m = map(int, input().split())
        s = input()
        s = [int(c) for c in s]  # Transform '0' to 0 and '1' to 1

        prefix_sum = [0] * (n + 1)
        for i in range(1, n + 1):
            prefix_sum[i] = prefix_sum[i - 1] + s[i - 1]

        for _ in range(m):
            li, ri = map(int, input().split())
            number_of_1s = prefix_sum[ri] - prefix_sum[li - 1]
            number_of_0s = ri - li + 1 - number_of_1s
            total_unique_strings = nCr(number_of_1s + number_of_0s, number_of_1s)
        print(total_unique_strings)

solve()
