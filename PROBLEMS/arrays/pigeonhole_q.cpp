#include <bits/stdc++.h>
using namespace std;

int main() {
    int np;
    int nq;
    cin >> np >> nq;

    // Inicializar o vetor com tamanho np + 1
    vector<int> pigeons(np + 1); // array que diz para cada pombo (posição) qual ninho ele ocupa (valor)

    // Preencher o vetor com valores iniciais
    for (int i = 0; i <= np; i++) { // Corrigido para <= np
        pigeons[i] = i;
        cout << pigeons[i] << endl;
    }

    for (int i = 0; i < nq; i++) {
        int q1;
        cin >> q1;
        if (q1 == 1) {
            int q2;
            int q3;
            cin >> q2 >> q3;
            pigeons[q2] = q3;
        } else if (q1 == 2) {
            int n_nests = 0;
            vector<int> used_nests;
            for (int i = 1; i <= np; i++) { // Corrigido para <= np
                if (find(used_nests.begin(), used_nests.end(), pigeons[i]) == used_nests.end()) {
                    used_nests.push_back(pigeons[i]);
                    n_nests++;
                }
            }
            cout << n_nests << endl;
        }
    }
}
