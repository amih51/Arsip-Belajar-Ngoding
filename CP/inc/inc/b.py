n, m, k = map(int, input().split())

d = list(map(int, input().split()))

ans = 0
for i in range(n):
    for j in range(n-i):
        if j <= k:
            continue

        mm = m
        ls = d[i:i+j]
        ls.sort()
        for k in range(len(ls)-k):
            mm -= ls[k]
        if 
        