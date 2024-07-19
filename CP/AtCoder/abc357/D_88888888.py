n = int(input())
MOD = 998244353
p10 = pow(10, len(str(n)), MOD)
print(n * (1 - pow(p10, n, MOD)) * pow(1 - p10, -1, MOD) % MOD)