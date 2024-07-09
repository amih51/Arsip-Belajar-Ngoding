n, t = map(int, input().split())
s = input()
x = list(map(int, input().split()))

l = []
for i in range(n):
    if s[i] == '0':
        l.append(x[i])
l.sort()

from bisect import bisect_right
ans = 0
for i in range(n):
    if s[i] == '1':
        ans += bisect_right(l, x[i] + 2*t) - bisect_right(l, x[i])
print(ans)

    