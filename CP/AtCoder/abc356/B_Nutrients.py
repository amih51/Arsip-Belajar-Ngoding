n, m = map(int, input().split())
a = list(map(int, input().split()))
x = [0] * m
for _ in range(n):
    t = list(map(int, input().split()))
    for i in range(m):
        x[i] += t[i]
        
for i in range(m):
    if x[i] < a[i]:
        print("No")
        exit()
print("Yes")