n = int(input())
arr = [0] * (n + 1)
p = list(map(int, input().split()))
for i in range(1, n + 1):
    arr[p[i - 1]] = i
print(*arr[1:])
