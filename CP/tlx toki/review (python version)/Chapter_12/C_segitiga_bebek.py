x = [0] * 300
y = [0] * 300

def luas(a, b, c):
    return abs(0.5*(x[a] * (y[b] - y[c]) + x[b] * (y[c] - y[a]) + x[c] * (y[a] - y[b])))

n = int(input())
for i in range(n):
    x[i], y[i] = map(int, input().split())

res = 10**9
b = True
for i in range(n - 2):
    for j in range(i + 1, n - 1):
        for k in range(j + 1, n):
            t = luas(i, j, k)
            if t == 0:
                continue
            
            if t == res:
                b = True
            elif t < res:
                res = t
                b = False
if b:
    print(-1)
else:
    print(f"{res:.2f}")