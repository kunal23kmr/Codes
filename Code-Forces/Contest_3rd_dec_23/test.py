def is_valid_name(name):
    return all(ch.islower() for ch in name)


def fun(a):
    ans = a
    while ans >= 10:
        total = str(ans)
        ans *= 0
        for i in total:
            ans += int(i)

    return ans


def calculate_password(number, name):

    S1 = "-" if number < 0 else ""
    S2 = ""
    exponent = 0
    exp_fla = False
    number = abs(number)

    if number > 1:
        while number >= 10:
            num /= 10
            exponent += 1

    elif number < 1:
        exp_fla = True
        while number < 1:
            num *= 10
            exponent -= 1

    parts = number.split('.')

    decimal = int(parts[0])
    fraction = int(parts[1])

    fraction = fun(int(fraction))
    exponent = fun(int(abs(exponent)))

    if exponent % 2 != 0:
        flag = True
        for i in name:
            if flag:
                S2 = S2+i
            flag = not flag

    units = ["zer", "one", "two", "thr", "fou",
             "fiv", "six", "sev", "eig", "nin"]

    decimal = units[decimal]
    fraction = units[fraction]
    epx = units[exponent]

    if exp_fla and exponent > 0:
        S1 += decimal + '.' + fraction + 'e' + "-" + epx
    elif exponent > 0:
        S1 += decimal + '.' + fraction + 'e' + '+' + epx
    else:
        S1 += decimal + '.' + fraction + 'e' + epx

    return S1 + "@" + S2


def main():
    T = int(input())
    for _ in range(T):
        number, name = map(str, input().split())
        if not number.isnumeric():
            print("Invalid")
            continue

        if not is_valid_name(name):
            print("Invalid")
            continue

        number = float(number)
        password = calculate_password(number, name)
        print(password)


if __name__ == "__main__":
    main()

# a = 12.09
# print(str(a).split('.'))
