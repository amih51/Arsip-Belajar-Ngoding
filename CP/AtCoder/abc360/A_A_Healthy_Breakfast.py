s = input()

res = 0
for c in s:
    if c == "R" and res == 0:
        res = 1
    if c == "M" and res == 1:
        res = 2

if res == 2:
    print("Yes")
else:
    print("No")