n, t, p = map(int, input().split())
l = list(map(int, input().split()))

l.sort(reverse=True)
ans = t-l[p-1]
if ans < 0:
    print(0)
else:
    print(ans)