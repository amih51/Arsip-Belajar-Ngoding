n = input()
l = list(map(int, input().split()))

size = len(l)
even = len([x for x in l if x % 2 == 0])
 
# print(even)

x = -1
if even == 1:
    x = 0
else:
    x = 1

idx = [i for i, a in enumerate(l,1) if a % 2 == x]

print(*idx)