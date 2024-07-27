def f(y, x):
    a = [[0, 0, 0, 0, 0],
         [0, 2, 3, 3, 4],
         [0, 3, 6, 7, 8]]
    Y = y // 2
    X = x // 4
    sub1 = Y * X * a[2][4]
    sub2 = Y * a[2][x % 4]
    sub3 = X * a[y % 2][4]
    sub4 = a[y % 2][x % 4]

    return sub1 + sub2 + sub3 + sub4 

M = 10**9
A, B, C, D = map(lambda x: int(x) + M, input().split())
print(f(D, C) - f(D, A) - f(B, C) + f(B, A))