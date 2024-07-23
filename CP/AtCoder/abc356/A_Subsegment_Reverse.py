n, l, r = map(int, input().split())
t = r
for i in range(1, n+1):
    if l <= i <= r:
        print(t, end=' ')
        t -= 1
    else:
        print(i, end=' ')