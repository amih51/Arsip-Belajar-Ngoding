n = int(input())
lst = list(map(int, input().split()))

lst_idx = [(rate, idx) for idx, rate in enumerate(lst,0)]

lst_idx.sort(reverse=True)

lst = [1] * len(lst)

# print(*lst_idx)

for i in range(1, len(lst_idx)):
    if lst_idx[i][0] < lst_idx[i-1][0]:
        lst[lst_idx[i][1]] = i + 1
    else:
        lst[lst_idx[i][1]] = lst[lst_idx[i-1][1]]
    # print(*lst)

print(*lst)