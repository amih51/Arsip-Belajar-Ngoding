N = int(input())
M = []
for _ in range(N):
    t = list(map(int, input().split()))
    M.append((t[0], 0))
    M.append((t[1], 1))

M.sort()
cnt = 0
ans = 0
for _, t in M:
    if not t:
        ans += cnt
    else:
        cnt += 1
print(N * (N - 1) // 2 - ans)