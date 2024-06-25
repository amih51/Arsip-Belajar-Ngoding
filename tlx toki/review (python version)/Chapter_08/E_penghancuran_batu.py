n = int(input())
w = [int(input()) for i in range(n)]

res = 0
for i in range(n - 1):
    res += max(w[i], w[i+1])
print(res)