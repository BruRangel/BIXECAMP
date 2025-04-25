def main():
    n = int(input("Enter the number of hills: "))
    heights = list(map(int, input("Enter the heights of the hills: ").split()))
    min_height = min(heights)
    changes = sum(height - min_height for height in heights)
    print(changes)

if __name__ == "__main__":
    main()
    