from collections import deque

n = int(input())

d = deque()
for _ in range(n):
    p = list(map(str, input().split()))

    match p[0]:
        case 'push_front':
            d.appendleft(p[1])
        case 'push_back':
            d.append(p[1])
        case 'pop_front':
            d.popleft()
        case 'pop_back':
            d.pop()

for c in d:
    print(c)