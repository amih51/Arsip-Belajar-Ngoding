n = int(input())
vec = list(map(int, input().split()))

count = 0
while True:
    lolos = True
    temp = []
    for i in range(1, len(vec)):
        if vec[i - 1] > vec[i]:
            temp.append(i)
            lolos = False
    for i in reversed(temp):
        vec.pop(i)
    if lolos:
        break
    count += 1

print(count)
