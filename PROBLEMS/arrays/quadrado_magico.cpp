// Verifica se um quadrado N por N é um quadrado mágico
// Um quadrado mágico é uma matriz quadrada onde a soma de cada linha, coluna e diagonal é a mesma

#include <bits/stdc++.h>
using namespace std;

int eh_quadrado_magico(int N, vector<vector<int>> &matriz) {
    // Verifica se a soma de cada linha, coluna e diagonal é a mesma
    int soma;
    for (int i = 0; i < N; i++) {
        int soma_atual = 0;
        for (int j = 0; j < N; j++) {
            soma_atual += matriz[i][j];
        }
        if (i == 0) {
            soma = soma_atual;
        }
        else if (soma_atual != soma) {
            return -1; // Não é um quadrado mágico
        }
    }
    for (int j = 0; j < N; j++) {
        int soma_atual = 0;
        for (int i = 0; i < N; i++) {
            soma_atual += matriz[i][j];
        }
        if (soma_atual != soma) {
            return -1; // Não é um quadrado mágico
        }
    }
    int soma_diagonal1 = 0, soma_diagonal2 = 0;
    for (int i = 0; i < N; i++) {
        soma_diagonal1 += matriz[i][i]; // Diagonal principal
        soma_diagonal2 += matriz[i][N - i - 1]; // Diagonal secundária
    }
    if (soma_diagonal1 != soma || soma_diagonal2 != soma) {
        return -1; // Não é um quadrado mágico
    }
    // Se todas as somas são iguais, é um quadrado mágico
    return soma;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> matriz(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
    int resultado = eh_quadrado_magico(N, matriz);
    cout << resultado;
}
