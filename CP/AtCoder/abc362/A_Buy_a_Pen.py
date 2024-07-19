R, G, B = map(int, input().split())
S = input()

if S == "Red":
    print(min(G, B))
elif S == "Green":
    print(min(R, B))
else:
    print(min(R, G))