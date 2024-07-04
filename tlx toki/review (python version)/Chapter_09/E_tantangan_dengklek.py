n = int(input())
start = list(map(int, input().split()))
k = int(input())
target = [i for i in range(1, n+1)]

from collections import deque, defaultdict
cnt = defaultdict(int)
cnt[tuple(start)] = 0  
q = deque([start])
not_poss = True

while q:
    cur = q.popleft()
    if cur == target:
        not_poss = False
        print(cnt[tuple(cur)])
        break 
    for i in range(n - k + 1):
        vec = cur[:i] + cur[i:i+k][::-1] + cur[i+k:]  
        if tuple(vec) not in cnt: 
            cnt[tuple(vec)] = cnt[tuple(cur)] + 1
            q.append(vec)

if not_poss:
    print(-1)
