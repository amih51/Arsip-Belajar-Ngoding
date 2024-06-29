from collections import defaultdict, deque

N, L, T, A, B = map(int, input().split())
nor = [map(int, input().split()) for _ in range(L)]
tol = [map(int, input().split()) for _ in range(T)]

graph = defaultdict(list)
for p, c in nor:
    graph[p].append((c, False))
    graph[c].append((p, False))
for p, c in tol:
    graph[p].append((c, True))
    graph[c].append((p, True))

def bfs(start, end):
    q = deque([(start, 0, False)])
    vst = set()
    
    while q:
        cur, path, to = q.popleft()
        if cur in vst:
            continue

        vst.add(cur)
        
        if cur == end:
            return path
        
        for nb, is_tol in graph[cur]:
            if nb not in vst:
                if not is_tol:
                    q.append((nb, path + 1, False))
                elif not to:
                    q.append((nb, path + 1, True))
                    
    return []

print(bfs(A, B))
