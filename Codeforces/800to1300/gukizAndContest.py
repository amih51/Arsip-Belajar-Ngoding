def calculate_positions(ratings):
    # Create a list of tuples (rating, index) to keep track of the original indices
    ratings_with_indices = [(rating, index) for index, rating in enumerate(ratings, 1)]

    # Sort the ratings in descending order
    ratings_with_indices.sort(reverse=True)

    # Initialize the positions list with 1, as all students initially have the same position
    positions = [1] * len(ratings)

    # Assign positions based on sorted ratings
    for i in range(1, len(ratings_with_indices)):
        if ratings_with_indices[i][0] < ratings_with_indices[i - 1][0]:
            positions[ratings_with_indices[i][1] - 1] = i + 1
        else:
            positions[ratings_with_indices[i][1] - 1] = positions[ratings_with_indices[i - 1][1] - 1]

    return positions


# Input
n = int(input())
ratings = list(map(int, input().split()))

# Calculate and print the positions of students
positions = calculate_positions(ratings)
print(*positions)
