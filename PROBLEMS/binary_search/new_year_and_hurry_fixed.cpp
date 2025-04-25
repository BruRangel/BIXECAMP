#include <bits/stdc++.h>
using namespace std;

// There are n problems
// The i-th problem takes 5*i minutes to be solved
// He needs k minutes to get to the event
// He will start the contest at 20:00 and need to be there until 00:00

int n_binary_search(int low, int high, int k) {
    int best = 0; // Armazena o maior número de problemas resolvidos

    while (low <= high) {
        int mid = low + (high - low) / 2; // Evitar overflow
        int time_spent = 0;

        for (int i = 1; i <= mid; i++) {
            time_spent += 5 * i;
        }

        if (time_spent + k <= 240) { // Verifica se o tempo total é válido
            best = mid; // Atualiza o melhor resultado
            low = mid + 1; // Tenta resolver mais problemas
        } else {
            high = mid - 1; // Reduz o número de problemas
        }
    }

    return best; // Retorna o maior número de problemas possíveis
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << n_binary_search(0, n, k);
}
