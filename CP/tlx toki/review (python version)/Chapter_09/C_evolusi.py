
N, M = map(int, input().split())
rel = [input().split() for _ in range(M)]
A, B = input().split()

from collections import defaultdict, deque

tr = defaultdict(list)
for p, c in rel:
    tr[p].append(c)

def bfs(start, end):
    q = deque([(start, [start])])
    vst = set()
    
    while q:
        cur, path = q.popleft()
        if cur in vst:
            continue
        vst.add(cur)
        
        if cur == end:
            return path
        
        for nb in tr[cur]:
            if nb not in vst:
                q.append((nb, path + [nb]))
    
    return None

path = bfs(A, B)
if not path:
    path = bfs(B, A)
if path:
    for c in path:
        print(c)
else:
    print("TIDAK MUNGKIN")

