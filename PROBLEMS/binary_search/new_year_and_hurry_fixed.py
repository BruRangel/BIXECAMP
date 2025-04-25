def n_binary_search(low, high, k):
    best = 0  # Stores the maximum number of problems solved

    while low <= high:
        mid = low + (high - low) // 2  # Avoid overflow
        time_spent = sum(5 * i for i in range(1, mid + 1))  # Calculate total time for 'mid' problems

        if time_spent + k <= 240:  # Check if the total time is valid
            best = mid  # Update the best result
            low = mid + 1  # Try solving more problems
        else:
            high = mid - 1  # Reduce the number of problems

    return best  # Return the maximum number of problems possible


if __name__ == "__main__":
    n, k = map(int, input().split())
    print(n_binary_search(0, n, k))
