from heapq import heappush, heappop
import sys
input = sys.stdin.readline

def dijstra(G, s):
    INF = 10**18
    dist = [INF] * len(G)
    dist[s] = 0
    pq = [(0, s)]
    while pq:
        d, v = heappop(pq)
        if d > dist[v]:
            continue
        for u, weight in G[v]:
            nd = d + weight
            if dist[u] > nd:
                dist[u] = nd
                heappush(pq, (nd, u))
    return dist

N, M = map(int, input().split())
A = list(map(int, input().split()))
G = [[] for _ in range(N)]
for _ in range(M):
    U, V, B = map(int, input().split())
    U -= 1; V -= 1
    G[U].append((V, B + A[V]))
    G[V].append((U, B + A[U]))
dist = dijstra(G, 0)
for i in range(N):
    dist[i] += A[0]
print(*dist[1:])