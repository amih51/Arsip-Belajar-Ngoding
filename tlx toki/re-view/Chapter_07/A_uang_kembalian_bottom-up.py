n = int(input())
li = list(map(int, input().split()))
x = int(input())

big = 6*10**4

dp = [big] * big
dp[0] = 0

for i in range(1, x + 1):
    for j in range(n):
        if li[j] <= i:
            dp[i] = min(dp[i], dp[i - li[j]] + 1)

if dp[x] == big:
    print(-1)
else:
    print(dp[x])