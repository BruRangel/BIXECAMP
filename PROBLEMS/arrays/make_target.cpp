#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho do quadrado: ";
    cin >> N;
    vector<vector<char>> mat(N, vector<char>(N));

    for (int i = 0; i < N; i++) {
        int j = N - i - 1;
        if (i <= j) {
            for (int k = i; k <= j; k++) {
                for (int l = i; l <= j; l++) {
                    if (i % 2 == 0)
                        mat[k][l] = '#';
                    else
                        mat[k][l] = '.';
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
}
