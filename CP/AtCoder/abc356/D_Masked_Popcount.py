n, m = map(int, input().split())
MOD = 998244353
ans = 0
for i in range(60):
    if m >> i & 1:
        cycle = (n + 1) // (2 << i)
        rest = (n + 1) % (2 << i)
        ans += (cycle << i) + max(0, rest - (1 << i))
print(ans % MOD )