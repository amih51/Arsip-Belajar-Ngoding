def predictGameOutcome(N, scores):
    # Initialize a dynamic programming table to store the maximum scores for each target position
    dp = [0] * (N + 1)
    
    # Fill in the table from bottom to top
    for i in range(N - 1, -1, -1):
        dp[i] = max(scores[i] - dp[i + 1], dp[i + 1])
    
    # The score obtained by the first player who goes first is stored in dp[0]
    return dp[0]

# Input
N = int(input())
scores = list(map(int, input().split()))

# Calculate and print the result
result = predictGameOutcome(N, scores)
print(result)
