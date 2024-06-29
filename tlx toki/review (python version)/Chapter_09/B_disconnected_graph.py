for _ in range(int(input())):
    n, e, q, r = map(int, input().split())

    x, y = [0] * (e + 1), [0] * (e + 1)
    for i in range(1, e + 1):
        x[i], y[i] = map(int, input().split())
    s = list(map(int, input().split()))
    if r > 0:
        dl = list(map(int, input().split()))
        for c in dl:
            x[c], y[c] = 0, 0
    
    mtx = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
    for i in range(1, e + 1):
        mtx[x[i]][y[i]] = 1
        mtx[y[i]][x[i]] = 1
    res = 0
    for i in range(len(s) - 1):
        for j in range(i + 1, len(s)):
            if not mtx[s[i]][s[j]]:
                res += 1
    print(res)
    