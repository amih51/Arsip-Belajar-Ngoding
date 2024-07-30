N = int(input())
D = [input() for _ in range(N)]

for i in range(1, N - 1):
    if D[i] == "sweet" and D[i-1] == "sweet":
        print("No")
        exit()
print("Yes")