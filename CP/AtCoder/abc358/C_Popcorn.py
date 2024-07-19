n, m = map(int, input().split())
s = [0] * n
for i in range(n):
    t = input()
    for j in range(m):
        if t[j] == "o":
            s[i] |= 1 << j
            
ans = n
for mask in range(1 << n):
    o = 0
    for i in range(n):
        if mask >> i & 1:
            o |= s[i]
    if o == (1 << m) - 1:
        ans = min(ans, bin(mask).count("1"))
print(ans)