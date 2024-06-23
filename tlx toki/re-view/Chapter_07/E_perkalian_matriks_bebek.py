MOD = 26101991

n = int(input())
li = [0] + list(map(int, input().split()))
q = int(input())

dp1 = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
dp2 = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
dp3 = [[0 for _ in range(n + 1)] for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, n - i + 2):
        l = j
        r = l + i - 1
        if l == r:
            dp1[l][r] = 0
            dp2[l][r] = 1
            dp3[l][r] = 1
        else:
            dp1[l][r] = 1e14
            for k in range(l, r):
                t = dp1[l][k] + dp1[k + 1][r] + li[l] * li[k + 1] * li[r + 1]
                if t <= dp1[l][r]:
                    if t < dp1[l][r]:
                        dp1[l][r] = t
                        dp2[l][r] = (dp2[l][k] * dp2[k + 1][r]) % MOD
                    elif t == dp1[l][r]:
                        dp2[l][r] += (dp2[l][k] * dp2[k + 1][r]) % MOD
                        dp2[l][r] %= MOD
                dp3[l][r] += (dp3[l][k] * dp3[k + 1][r]) % MOD
                dp3[l][r] %= MOD

if q == 1:
    print(dp1[1][n])
elif q == 2:
    print(dp2[1][n])
elif q == 3:
    print(dp3[1][n])
