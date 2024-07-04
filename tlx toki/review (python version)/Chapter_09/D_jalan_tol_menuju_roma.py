n, j, t, st, en = map(int, input().split())

adj = [[] for _ in range(505)]
for i in range(j):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)

tol = []
for i in range(t):
    u, v = map(int, input().split())
    tol.append([u, v])
    
from collections import deque

def bfs(x):
    dist = [float('inf')] * 505
    visited = [False] * 505
    q = deque()
    
    q.append(x)
    dist[x] = 0
    visited[x] = True

    while q:
        s = q.popleft()
        for i in adj[s]:
            if not visited[i]:
                visited[i] = True
                dist[i] = dist[s] + 1
                q.append(i)
                
    return dist

initial_dist = bfs(st)
res = initial_dist[en]

for u, v in tol:
    adj[u].append(v)
    adj[v].append(u)
    dist = bfs(st)
    if dist[en] != float('inf'):
        res = min(res, dist[en])
    adj[u].remove(v)
    adj[v].remove(u)

print(res)
