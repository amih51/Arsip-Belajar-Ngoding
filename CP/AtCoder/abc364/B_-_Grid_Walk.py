H, W = map(int, input().split())
Si, Sj = map(int, input().split())
C = [input() for _ in range(H)]
X = input()

Si -= 1
Sj -= 1
for x in X:
    match x:
        case "L":
            if Sj > 0 and C[Si][Sj - 1] == ".":
                Sj -= 1
        case "R":
            if Sj + 1 < W and C[Si][Sj + 1] == ".":
                Sj += 1
        case "U":
            if Si > 0 and C[Si - 1][Sj] == ".":
                Si -= 1
        case "D":
            if Si + 1 < H and C[Si + 1][Sj] == ".":
                Si += 1
print(f"{Si + 1} {Sj + 1}")