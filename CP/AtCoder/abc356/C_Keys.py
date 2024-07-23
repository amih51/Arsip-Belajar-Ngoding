n, m, k = map(int, input().split())
c, a, r = [], [], []
for _ in range(m):
    i = list(input().split())
    c.append(i[0])
    r.append(i[-1])
    a.append(list(map(int, i[1:-1])))

ans = 0
for mask in range(1 << n):
    ok = True
    for i in range(m):
        cnt = 0
        for j in a[i]:
            cnt += (mask >> (j - 1)) & 1
        ok &= (cnt >= k) == (r[i] == 'o')
    ans += ok
print(ans)