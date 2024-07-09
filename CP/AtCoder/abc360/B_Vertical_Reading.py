s, t = map(str, input().split())

res = False
for i in range(1, len(s)):
    for j in range(i):
        temp = ""
        for k in range(j, len(s), i):
            temp += s[k]
        if temp == t:
            print("Yes")
            exit()
print("No")