def fizzBuzz(n):
    if not n%3:
        yield('fizz')
    if not n%5:
        yield('buzz')
    

# print(x for x in fizzBuzz(15))

for x in fizzBuzz(15):
    print(x)
