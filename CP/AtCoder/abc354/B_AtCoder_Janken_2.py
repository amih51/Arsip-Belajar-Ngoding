N = int(input())
S = []
T = 0
for _ in range(N):
    s, c = input().split()
    S.append(s)
    T += int(c)
S.sort()
print(S[T % N])