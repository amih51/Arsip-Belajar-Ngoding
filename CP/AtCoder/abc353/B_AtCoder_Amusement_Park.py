N, K = map(int, input().split())
A = list(map(int, input().split()))

ans = 1
curr = K
for c in A:
    if curr >= c:
        curr -= c
    else:
        ans += 1
        curr = K - c
    # print(curr)
print(ans)