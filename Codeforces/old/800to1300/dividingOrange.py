def divide_orange(n, k, preferences):
    orange_segments = list(range(1, n*k+1))
    result = [[] for _ in range(k)]

    # Assign preferred segments to each child
    for i in range(k):
        result[i].append(preferences[i])
        orange_segments.remove(preferences[i])

    # Fill the remaining segments randomly for each child
    for i in range(k):
        while len(result[i]) < n:
            result[i].append(orange_segments.pop())

    # Flatten the result list and return as space-separated integers
    return " ".join(str(segment) for sublist in result for segment in sublist)

# Input
n, k = map(int, input().split())
preferences = list(map(int, input().split()))

# Output
print(divide_orange(n, k, preferences))
