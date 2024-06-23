n = int(input())
li = list(map(int, input().split()))
x = int(input())

max = 5*10**4

memo = [max] * max
def rek(x):
    if x == 0:
        return 0
    
    t = max
    for i in range(n):
        if(li[i] <= x):
            if memo[x - li[i]] == max:
                memo[x - li[i]] = rek(x - li[i])

            t = min(t, memo[x - li[i]] + 1)

    memo[x] = t
    return t

res = rek(x)
if res == max:
    print(-1)
else:
    print(res)