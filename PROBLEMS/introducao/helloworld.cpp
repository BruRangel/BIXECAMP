#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    x = 10;
    y = 3;

    cout << "Soma: " << x + y << endl;
    cout << "Subtracao: " << x - y << endl;
    cout << "Multiplicacao: " << x * y << endl;
    cout << "Quociente: " << x / y << endl;
    cout << "Resto: " << x % y << endl;

    double q = 5.0 / 3.0;
    cout << q << endl;
    cout << setprecision(30) << fixed;
    cout << q << endl;

    char caractere;
    cout << "Digite o caractere: ";
    cin >> caractere;
    cout << "O meu caractere eh: " << caractere << endl;
}
