n = int(input())
a = list(map(int, input().split()))
w = list(map(int, input().split()))

ans = 0
mx = [0] * (n + 1)
for i in range(n):
    ans += w[i]
    mx[a[i]] = max(mx[a[i]], w[i])
    
for i in range(1, n + 1):
    ans -= mx[i]

print(ans)