#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool vagoes_visitados[n];
    for (int i = 0; i < n; i++)
        vagoes_visitados[i] = false;

    int vagao_ini = 0; // arrays começam do index 0
    int vagao_atual = vagao_ini;

    int redirecionamento_vagoes[n];
    for (int i = 0; i < n; i++)
        cin >> redirecionamento_vagoes[i];

    while (vagoes_visitados[vagao_atual] == false) {
        vagoes_visitados[vagao_atual] = true;
        vagao_atual = redirecionamento_vagoes[vagao_atual] - 1;
    }

    bool todos_foram_visitados = true;
    for (int i = 0; i < n; i++)
        if (vagoes_visitados[i] == false) {
            todos_foram_visitados = false;
            break;
        }
    
    if (!todos_foram_visitados || !(vagao_atual == vagao_ini))
        cout << "Nao";
    else
        cout << "Sim";
}
