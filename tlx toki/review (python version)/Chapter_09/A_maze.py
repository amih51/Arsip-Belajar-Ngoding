from collections import deque

inf = 10**6

n, m = map(int, input().split())

maze = [[-1] * (m + 1)] + [[-1] + list(map(int, input().split())) for _ in range(n)]

a, b = map(int, input().split())

dp = [[inf for _ in range(m + 1)] for _ in range(n + 1)]

def bfs(start_r, start_c):
    queue = deque([(start_r, start_c, 1)])
    dp[start_r][start_c] = 1
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    
    while queue:
        r, c, steps = queue.popleft()

        if r == 1 or r == n or c == 1 or c == m:
            return steps
        
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            
            if 1 <= nr <= n and 1 <= nc <= m and maze[nr][nc] == 0 and steps + 1 < dp[nr][nc]:
                dp[nr][nc] = steps + 1
                queue.append((nr, nc, steps + 1))
    
    return inf

print(bfs(a, b))
