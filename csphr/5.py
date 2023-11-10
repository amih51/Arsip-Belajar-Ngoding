def calculate_max_profit(machine_data):
    max_profit = 0
    current_profit = 0

    for machine in machine_data:
        if machine == 'S':
            current_profit += 100
        elif machine == 'A':
            current_profit += 10
        elif machine == 'B':
            current_profit += 1
        elif machine == 'D':
            current_profit -= 1
        elif machine == 'E':
            current_profit -= 10
        elif machine == 'F':
            current_profit -= 100

        if current_profit < 0:
            current_profit = 0

        if current_profit > max_profit:
            max_profit = current_profit

    return max_profit

# Read input from standard input
machine_data = input().strip()
max_profit = calculate_max_profit(machine_data)
print(max_profit)
