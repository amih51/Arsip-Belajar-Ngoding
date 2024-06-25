from collections import deque

n = int(input())

d = deque()
rev = False
for _ in range(n):
    p = list(map(str, input().split()))

    match p[0]:
        case 'add':
            if rev:
                d.extend([p[1]] * int(p[2]))
            else:
                d.extendleft([p[1]] * int(p[2]))
            print(len(d))
        case 'del':
            if rev:
                print(d[0])
                for _ in range(int(p[1])):
                    d.popleft()
            else:
                print(d[-1])
                for _ in range(int(p[1])):
                    d.pop()
        case 'rev':
            if rev:
                rev = False
            else:
                rev = True