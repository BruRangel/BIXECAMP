def now(S, E):
    if S > E:
        return 0
    if S == E:
        return 1
    if S < E:
        return now(S + 1, E) + now(S + 2, E) + now(S + 3, E)

if __name__ == "__main__":
    S, E = map(int, input().split())
    print(now(S, E))
