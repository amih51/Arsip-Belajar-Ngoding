N = int(input())
A = list(map(int, input().split()))
MOD = 998244353

ans = 0
m = 0
s = 0
for a in A[::-1]:
    ans += a * m + s
    m += 10 ** len(str(a))
    s += a
    # print(f"{ans} {m} {s}")
print(ans % MOD)