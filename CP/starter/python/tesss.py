from math import factorial
n = 5
one = n
two = n - one
result = 0
while one + 2*two == n:
    result += factorial(one + two) / factorial(one) / factorial(two)
    print(result)
    two += 1
    one -= 2
