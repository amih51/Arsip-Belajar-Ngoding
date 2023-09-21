def maximizeSumOfLevels(N, A):
    # Initialize a list to store the maximum possible sum of levels for each segment ending at position i
    dp = [0] * N

    # Initialize a dictionary to store the last position where a level appears
    last_seen = {}

    # Iterate through the problems
    for i in range(N):
        level = A[i]
        
        # If the level has been seen before, update the last position
        if level in last_seen:
            last_position = last_seen[level]
            # Update the current dp value with the previous segment plus the current level
            if last_position > 0:
                dp[i] = dp[last_position - 1] + level
            else:
                dp[i] = level
        else:
            # If the level is unique, use only the current level
            if i > 0:
                dp[i] = dp[i - 1] + level
            else:
                dp[i] = level

        # Update the last_seen dictionary with the current position
        last_seen[level] = i

    # Find the maximum sum of levels
    max_sum = max(dp)

    return max_sum

# Input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the result
result = maximizeSumOfLevels(N, A)
print(result)
