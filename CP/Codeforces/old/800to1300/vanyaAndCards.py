n, k = map(int, input().split())
cards = list(map(int, input().split()))

total_sum = 0
for i in cards:
    total_sum += i
    # print(total_sum)

needCard = 0
if total_sum != 0:
    remaining_sum = abs(total_sum)
    needCard = remaining_sum // k
    # print(needCard)
    # print(needCard % k)
    if remaining_sum % k > 0:
        needCard += 1

print(needCard)