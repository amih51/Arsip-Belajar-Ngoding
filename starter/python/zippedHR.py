n, x = map(int, input().split())
hash_map = {}
for i in range(x):
    inp = list(map(float, input().split()))
    for i in range(n):
        hash_map[i] = hash_map.get(i, 0) + inp[i]
for i in range(n):
    print("{:.1f}".format(hash_map[i] / x), end='\n')
