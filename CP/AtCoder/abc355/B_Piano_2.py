n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = sorted(a + b)

for i in range(1, n + m):
    if c[i - 1] in a and c[i] in a:
        print("Yes")
        exit()
    
print("No")