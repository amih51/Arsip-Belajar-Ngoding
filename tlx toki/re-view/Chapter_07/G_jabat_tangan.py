n = int(input())

dp = [0] * (n + 1)
dp[0] = 1
dp[1] = 0
for i in range(2, n + 1):
    for j in range(2, i + 1):
        dp[i] += dp[j - 2] * dp[i - j]

print(dp[n])