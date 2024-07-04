from collections import deque

n = int(input())

d = deque()
m = 0
for _ in range(n):
    p = list(map(str, input().split()))

    match p[0]:
        case 'add':
            d.extend([int(p[1]) - m] * int(p[2]))
            print(len(d))
        case 'del':
            print(d[-1] + m)
            for _ in range(int(p[1])):
                d.pop()
        case 'adx':
            m += int(p[1])
        case 'dex':
            m -= int(p[1])
            