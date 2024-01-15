def solve():
    nums = list(map(int, input().split()))
    q = int(input())
    for i in range(1, len(nums)):
        nums[i] += nums[i - 1]  # prefix sum

    for _ in range(q):
        l, r = map(int, input().split())
        print(nums[r] - nums[l - 1] if l > 0 else nums[r])


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
