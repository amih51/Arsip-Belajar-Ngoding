h = int(input())

cnt = 0
for i in range(10**9):
    cnt += 2**i
    if cnt > h:
        print(i + 1)
        exit()
    