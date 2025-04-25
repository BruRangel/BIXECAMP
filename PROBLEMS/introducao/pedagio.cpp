#include <bits/stdc++.h>
using namespace std;

int main() {
    int tam_estrada;
    cin >> tam_estrada;

    int espacos_pedagio;
    cin >> espacos_pedagio;

    int custo_por_quilometro;
    cin >> custo_por_quilometro;

    int custo_pedagio;
    cin >> custo_pedagio;

    int total_km = custo_por_quilometro * tam_estrada;
    int total_pedagio = tam_estrada / espacos_pedagio * custo_pedagio;

    cout << total_km + total_pedagio;
}
