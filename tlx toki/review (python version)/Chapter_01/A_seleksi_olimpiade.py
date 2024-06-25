def swp(arr, a, b):
    arr[a], arr[b] = arr[b], arr[a]

def srt(arr, m):
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i][3] < arr[j][3]:
                swp(arr, i, j)
            elif arr[i][3] == arr[j][3]:
                if arr[i][2] < arr[j][2]:
                    swp(arr, i, j)
                elif arr[i][2] == arr[j][2]:
                    if arr[i][1] < arr[j][1]:
                        swp(arr, i, j)

t = int(input())

    
for _ in range(t):
    n, m = map(int, input().split())
    s = input()

    arr = []
    for i in range(n):
        temp = input().split()
        arr.append([temp[0]] + list(map(int, temp[1:])))

    srt(arr, m)

    res = False
    for i in range(m):
        if arr[i][0] == s:
            res = True
            break
    
    if res:
        print("YA")
    else:
        print("TIDAK")