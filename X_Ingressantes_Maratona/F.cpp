#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;
    cin >> rows;
    int columns = 8 + (rows/2 - 1) * 4;

    char mat[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            mat[i][j] = ' ';
        }
    }

    for (int i = 0; i < rows; i++) {
        mat[i][0] = '|';
        mat[i][columns-1] = '|';
        mat[i][columns/2] = '|';
        mat[i][columns/2 - 1] = '|';
    }

    for (int i = 1; i <= rows/2; i++) {
        mat[rows-i][i] = '/';
    }

    int aux1 = rows/2 + 1;
    for (int i = rows/2; i < rows; i++) {
        mat[i][aux1] = '\\';
        aux1 = aux1 + 1;
    }

    int aux2 = 0;
    for (int i = columns/2 + 1; i < columns/2 + 1 + rows/2; i++) {
        mat[aux2][i] = '\\';
        aux2 += 1;
    }

    int aux3 = rows/2 - 1;
    for (int i = columns/2 + 1 + rows/2; i < columns - 1; i++) {
        mat[aux3][i] = '/';
        aux3--;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
}
