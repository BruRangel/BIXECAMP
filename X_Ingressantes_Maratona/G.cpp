#include <bits/stdc++.h>
#include <math.h>
#include <cmath>
using namespace std;


// retorna a coordenada de um ponto y pertencente a uma reta com inclinação de 45° dados os valores anteriores e o valor x atual
double y_45(int y0, int x0, int x) {
    return (1) * (x - x0) + y0;
}

double n_y_45(int y0, int x0, int x) {
    return (-1) * (x - x0) + y0;
}

int main() {
    int N;
    cin >> N;
    double mat[N][3];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    int num_paredes = 0;
    double x0 = 0;
    double y0 = 0;

    cout << "Primeiro x0: " << x0 << " Primeiro y0: " << y0 << endl;

    for (int i = 0; i < N; i++) {
        double x = mat[0][0];
        double y_pos = y_45(y0, x0, x);
        double y_neg = n_y_45(y0, x0, x);

        cout << "i: " << i << " x: " << x << " y_pos: " << y_pos << " y_neg: " << y_neg << endl;

        if (y_pos >= mat[0][1] && y_pos <= mat[0][1]) {
            num_paredes++;
            x0 = x;
            y0 = y_pos;
        }
        else if (y_neg >= mat[0][1] && y_neg <= mat[0][1]) {
            num_paredes++;
            x0 = x;
            y0 = y_neg;
        }
        else
            break;
    }

    cout << num_paredes;

    // o valor da coordenada y do ponto (P) pertencente a reta com inclinação de 45° quando a coordenada x é igual a parade atual deve estar dentro dos limites

    /*
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    */
}
