N, M = map(int, input().split())
A = list(map(int, input().split()))

win = 10**6
hs = 0
score = [0] * N
for c in A:
    score[c - 1] += 1
    if score[c - 1] > hs:
        hs = score[c - 1]
        win = c
    elif score[c - 1] == hs:
        hs = score[c - 1]
        win = min(win, c)
    print(win)