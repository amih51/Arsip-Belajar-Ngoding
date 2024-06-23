dp = [0] * 1001

for i in range(1001):
    dp[i] = max(i, i // 2 + i // 3 + i // 4)
    dp[i] = max(dp[i], dp[i // 2] + dp[i // 3] + dp[i // 4])

print(dp[int(input())])