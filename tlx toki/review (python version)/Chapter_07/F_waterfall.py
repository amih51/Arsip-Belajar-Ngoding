v, h, n = map(int, input().split())

peta = [[0 for _ in range(h + 1)] for _ in range(v + 1)]

for _ in range(n):
    v1, h1, v2, h2 = map(int, input().split())

    for i in range(v1, v2 + 1):
        for j in range(h1, h2 + 1):
            peta[i][j] = 1

dp = [[0 for _ in range(h + 1)] for _ in range(v + 1)]
for i in range(v - 1, -1, -1):
    for j in range(1, h + 1):
        if not peta[i][j]:
            if peta[i + 1][j]:
                c = j
                while c > 0 and peta[i + 1][c]:
                    c -= 1
                if c > 0:
                    dp[i][j] += dp[i + 1][c]
                c = j
                while c <= h and peta[i + 1][c]:
                    c += 1
                if c <= h:
                    dp[i][j] += dp[i + 1][c]
                dp[i][j] += 1
            else:
                dp[i][j] = dp[i + 1][j]

ans = -1
for i in range(1, h + 1):
    ans = max(ans, dp[0][i])

print(ans)
