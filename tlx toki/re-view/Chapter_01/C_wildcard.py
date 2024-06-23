s = input()
n = int(input())
arr = [input() for _ in range(n)]

l = 0
r = 0
for i in range(len(s)):
    if s[i] == '*':
        l = i
        r = len(s) - l - 1
        break

list_res = []

for k in range(n):
    res = True
    t = arr[k]
    if len(t) < l + r:
        continue
    for i in range(l):
        if t[i] != s[i]:
            res = False
    for i in range(r):
        if t[-1-i] != s[-1-i]:
            res = False
    if res:
        list_res.append(t)
        
for li in list_res:
    print(li)