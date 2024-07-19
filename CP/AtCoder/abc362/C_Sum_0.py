n = int(input())
l = []
r = []
sum = 0
upp = 0
for _ in range(n):
    a, b = map(int, input().split())
    l.append(a)
    r.append(b)
    sum += a
    upp += b

if sum > 0 or upp < 0:
    print("No")
else:
    print("Yes")
    i = 0
    while sum < 0:
        if sum + r[i] - l[i] <= 0:
            sum += r[i] - l[i]
            l[i] = r[i]
            i += 1
        else:
            l[i] -= sum
            break
    for c in l:
        print(c, end=' ')