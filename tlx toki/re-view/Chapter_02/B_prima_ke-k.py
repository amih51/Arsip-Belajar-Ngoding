dp = [True] * 990000

dp[1] = False
for i in range(2, 990000):
    if dp[i]:
        for j in range(i*2, 990000, i):
            dp[j] = False
        
res = []
for i in range(990000):
    if dp[i]:
        res.append(i)

t = int(input())

for _ in range(t):
    k = int(input())
    print(res[k])