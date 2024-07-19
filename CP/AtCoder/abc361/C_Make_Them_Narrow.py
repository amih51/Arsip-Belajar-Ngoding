N, K = map(int, input().split())
A = list(map(int, input().split()))

A.sort()
res = float('inf')
for i in range(K+1):
    res = min(res, A[i + (N - K) - 1] - A[i])
print(res)