def fpb(a, b):
    if b == 0:
        return a
    else:
        return fpb(b, a % b)

a, b = map(int, input().split())
c, d = map(int, input().split())

e = a * d + b * c
f = b * d

x = fpb(e, f)

print(f"{e//x} {f//x}")