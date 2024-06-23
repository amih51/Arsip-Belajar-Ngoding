n, k = map(int, input().split())

w, v = [0] * (k + 1), [0] * (k + 1)
for i in range(1, k + 1):
    w[k - i + 1], v[k - i + 1] = map(int, input().split())

dp = [[-1 for _ in range(k + 1)] for _ in range(n + 1)]

def solve(n, k):
    if k == 1:
        dp[n][k] = v[1] if n >= w[1] else 0
        return dp[n][k]

    if dp[n][k] != -1:
        return dp[n][k]
    
    dp[n][k] = solve(n, k - 1)
    
    if n >= w[k]:
        dp[n][k] = max(dp[n][k], solve(n - w[k], k - 1) + v[k])

    return dp[n][k]

for i in range(n + 1):
    solve(i, k)

tmp = n
while dp[tmp][k] == dp[n][k]:
    tmp -= 1
tmp += 1

res = []
for i in range(k, 0, -1):
    if tmp >= w[i] and dp[tmp][i - 1] <= dp[tmp - w[i]][i - 1] + v[i]:
        tmp -= w[i]
        res += [k - i + 1] 

for c in res:
    print(c)
