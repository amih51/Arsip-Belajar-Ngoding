n, m = map(int, input().split())
h = list(map(int, input().split()))

ans = 0
for c in h:
    if m >= c:
        m -= c
        ans += 1
    else:
        break
print(ans)