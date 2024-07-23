N, T = map(int, input().split())
A = list(map(int, input().split()))

R = [0] * N
C = [0] * N
DL, DR = 0, 0
for i in range(T):
    r = (A[i] - 1) // N
    c = (A[i] - 1) % N
    R[r] += 1
    C[c] += 1
    if r == c:
        DL += 1
    if r + c == N - 1:
        DR += 1
        
    if R[r] == N or C[c] == N or DL == N or DR == N:
        print(i+1)
        exit()

print(-1)