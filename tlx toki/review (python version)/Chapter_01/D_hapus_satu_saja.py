a = input()
b = input()

res = True
if len(a) - 1 != len(b):
    res = False

if res:
    l, r = 0, 0
    penalty = False
    while l < len(a) and r < len(b):
        if a[l] != b[r]:
            if not penalty:
                l += 1
                penalty = True
                continue
            else:
                res = False
                break
        else:
            l += 1
            r += 1
    
if res:
    print("Tentu saja bisa!")
else:
    print("Wah, tidak bisa :(")