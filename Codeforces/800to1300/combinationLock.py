n = int(input())
a = str(input())
b = str(input())

total = 0
for i in range(n):
    if abs(int(a[i]) - int(b[i])) < 6:
        total += abs(int(a[i]) - int(b[i]))
    else:
        if int(a[i]) < 5:
            total += abs(10 + int(a[i]) - int(b[i]))
        else:
            total += abs(-10 + int(a[i]) - int(b[i]))


print(total)