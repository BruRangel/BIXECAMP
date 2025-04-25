def main():
    N, Q = map(int, input().split())
    pigeons = list(range(N + 1))  # array that says for each pigeon (position) which nest it is (value)

    for _ in range(Q):
        query_type = int(input())

        if query_type == 1:
            P, H = map(int, input().split())
            pigeons[P] = H

        elif query_type == 2:
            nest_count = {}  # Mapeia cada ninho para a quantidade de pombos
            
            for i in range(1, N + 1):  # Contar pombos em cada ninho
                nest_count[pigeons[i]] = nest_count.get(pigeons[i], 0) + 1

            n_nests = sum(1 for count in nest_count.values() if count > 1)  # Verificar se o ninho tem mais de um pombo
            print(n_nests)

if __name__ == "__main__":
    main()
