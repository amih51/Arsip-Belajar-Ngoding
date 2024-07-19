n, a = map(int, input().split())
t = list(map(int, input().split()))

time = 0
for i in t:
    time = max(time + a, i + a)
    print(time)