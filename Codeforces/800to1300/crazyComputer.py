n, c = map(int, input().split())
lst = list(map(int, input().split()))
index = 0
for i in range(len(lst)-1, 0, -1):
    if lst[i] - lst[i-1] > c :
        index = i
        break
print(len(lst) - index)