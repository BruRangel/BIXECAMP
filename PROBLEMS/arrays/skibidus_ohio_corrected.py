def main():
    t = int(input())
    for _ in range(t):
        s = input()
        found = any(s[i] == s[i + 1] for i in range(len(s) - 1))
        print(1 if found else len(s))

if __name__ == "__main__":
    main()
