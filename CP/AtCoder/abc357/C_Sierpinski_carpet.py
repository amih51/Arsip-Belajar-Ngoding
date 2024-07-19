def f(n):
    if n == 0:
        return ["#"]
    sub = f(n - 1)
    l = len(sub)
    ret = [["." for _ in range(3 * l)] for _ in range(3 * l)]
    for I in range(3):
        for J in range(3):
            if not (I == 1 and J == 1):
                for i in range(l):
                    for j in range(l):
                        ret[I * l + i][J * l + j] = sub[i][j]
    return ret

ans = f(int(input()))
for a in ans:
    print("".join(a))