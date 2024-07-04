n = int(input())
total = 0
for i in range(n):
    a = list(map(int, input().split()))
    if a[1] - a[0] > 1 :
        total += 1 

print(total)