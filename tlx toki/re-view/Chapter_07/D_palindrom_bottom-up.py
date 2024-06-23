n = int(input())

s = [input() for _ in range(n)]

for a in s:
    t = len(a) + 1
    b = a[::-1]
    dp = [[0 for _ in range(t)] for _ in range(t)]

    for i in range(1, t):
        for j in range(1, t):
            if a[i - 1] == b[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    
    print(dp[t - 1][t - 1])
    