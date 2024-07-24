N = int(input())
AC = []
for i in range(N):
    AC.append(list(map(int, input().split())))
    AC[i].append(i + 1)
AC.sort(reverse=1)

ans = []
min_c = 10**18
for a, c, i in AC:
    if c < min_c:
        min_c = c
        ans.append(i)
print(len(ans))
print(*sorted(ans))