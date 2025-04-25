#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int Q;
    cin >> N >> Q;
    vector <int> pigeons(N + 1); // array that say for each pigeon (position) which nest he is (value)
    
    for (int i = 0; i < N + 1; i++) {
        pigeons[i] = i;
    }

    for (int i = 0; i < Q; i++) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int P;
            int H;
            cin >> P >> H;
            pigeons[P] = H;
        } 

        else if (query_type == 2) {
            map<int, int> nest_count; // Mapeia cada ninho para a quantidade de pombos
            
            for (int i = 1; i <= N; i++) { // Contar pombos em cada ninho
                nest_count[pigeons[i]]++;
            }

            int n_nests = 0;
            for (auto& pair : nest_count) {
                if (pair.second > 1) { // Verificar se o ninho tem mais de um pombo
                    n_nests++;
                }
            }
            
            cout << n_nests << endl;
        }
    }
}
