n, x, y = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort(reverse=1)
b.sort(reverse=1)

t = 0
for i in range(n):
    t += a[i]
    if t > x:
        break
t = i + 1
p = 0
for i in range(n):
    p += b[i]
    if p > y:
        break
p = i + 1
print(min(t, p))