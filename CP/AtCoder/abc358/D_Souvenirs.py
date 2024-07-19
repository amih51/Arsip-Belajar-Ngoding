from sortedcontainers import SortedList
n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a = SortedList(a)
ans = 0
for c in b:
    i = a.bisect_left(c)
    if i == len(a):
        print(-1)
        exit()
    else:
        ans += a.pop(i)
    
print(ans)
