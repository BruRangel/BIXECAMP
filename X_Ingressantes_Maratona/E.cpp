#include <bits/stdc++.h>
using namespace std;

int main() {
    char mat[2][2];
    cin >> mat[0][0] >> mat[0][1] >> mat[1][0] >> mat [1][1];
    // Em cima, não podemos ter BA, AC nem CB
    // Em baixo, não podemos ter AB, CA nem BC
    if (mat[0][0] == 'B' && mat[0][1] == 'A' ||
        mat[0][0] == 'A' && mat[0][1] == 'C' ||
        mat[0][0] == 'C' && mat[0][1] == 'B' ||
        mat[1][0] == 'A' && mat[1][1] == 'B' ||
        mat[1][0] == 'C' && mat[1][1] == 'A' ||
        mat[1][0] == 'B' && mat[1][1] == 'C')
        cout << "Nao";
    else
        cout << "Sim";
}
