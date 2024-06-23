n, k = map(int, input().split())

w = [0] * (k + 1)
v = w.copy()
for i in range(1, k + 1):
    w[i], v[i] = map(int, input().split())

dp = [[0 for _ in range(n + 1)] for _ in range(k + 2)] 
for i in range(k, 0, -1):
    for j in range(n + 1):
        dp[i][j] = dp[i + 1][j]
        if j >= w[i]:
            dp[i][j] = max(dp[i][j], dp[i + 1][j - w[i]] + v[i])

for c in dp:
    print(c)

tmp = n
for i in range(n - 1, -1, -1):
    if dp[1][i] == dp[1][n]:
        tmp = i

for i in range(1, k + 1):
    if dp[i][tmp] == dp[i + 1][tmp - w[i]] + v[i]:
        print(i)
        tmp -= w[i]