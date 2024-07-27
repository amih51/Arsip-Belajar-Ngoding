N = int(input())

head = 0
total = 0
for i in range(N):
    a, b = map(int, input().split())
    head = max(head, b - a)
    total += a
print(total + head)