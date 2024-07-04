n = int(input())
h = [int(input()) for _ in range(n)]

res = 0
s = []

for i in range(n - 1, -1, -1):
    while s and h[i] > s[-1]:
        s.pop()
    
    s.append(h[i])
        
    res += len(s)

print(res)
