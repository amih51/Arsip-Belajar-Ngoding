n = int(input())

d = []
for _ in range(n):
    d.append(int(input()))

def fpb(a, b):
    if b == 0:
        return a
    else:
        return fpb(b, a % b)

def kpk(a, b):
    return a * b // fpb(a, b)

res = d[0]
for i in range(1, n):
    res = kpk(res, d[i])

print(res)