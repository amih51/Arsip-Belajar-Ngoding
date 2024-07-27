def f(x, y):
    for i in range(min(len(x), len(y))):
        # print(x[i], end=' ')
        # print(y[i])
        if x[i] != y[i]:
            i -= 1
            break
    # print(i + 1)
    return i + 1

N = int(input())
S = list(input().split())

ans = 0
for i in range(N - 1):
    for j in range(i + 1, N):
        ans += f(S[i], S[j])
print(ans)