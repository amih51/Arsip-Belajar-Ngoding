n, m = map(int, input().split())
lst = [False] * m
for i in range(n):
    temp = list(map(int, input().split()))[1:]
    for i in temp:
        lst[i-1] = True

if all(lst) == True and any(lst) == True:
    print("YES")
else :
    print("NO")