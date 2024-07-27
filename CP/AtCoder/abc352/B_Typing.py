S = input()
T = input()

ans = []
j = 0
for i in range(len(T)):
    if T[i] == S[j]:
        ans.append(i + 1)
        j += 1
print(*ans)