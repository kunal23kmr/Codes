MOD = 998244353

def convert_to_base(decimal, to_base, fixed_bits):
    result = ""

    while decimal > 0 or len(result) < fixed_bits:
        remainder = decimal % to_base
        digit = str(remainder) if remainder < 10 else chr(remainder - 10 + ord('A'))
        result = digit + result
        decimal //= to_base

    return result if result else "0"    

def all_xor(s):
    ans = 0
    for c in s:
        ans ^=int(c)
    return ans

def xor_sum(l, r, b):
    ans = 0
    fixed_bits = len(convert_to_base(r, b, 0))  

    for i in range(l, r + 1):
        s = convert_to_base(i, b, fixed_bits)
        # print(s+'\n')
        ans = (ans % MOD + all_xor(s) % MOD) % MOD  

    return ans % MOD

def main():
    t = int(input())

    for _ in range(t):
        l, r, b = map(int, input().split())
        print(xor_sum(l, r, b))

if __name__ == "__main__":
    main()
