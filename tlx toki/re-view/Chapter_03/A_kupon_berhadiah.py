n, x = map(int, input().split())

li = list(map(int, input().split()))

jarak_min = 5*10**5
res = None

for c in li:
    if abs(x - c) < jarak_min:
        res = c
        jarak_min = abs(x - c)
    elif abs(x - c) == jarak_min and c < res:
        res = c

print(res)