#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int tam_tubo;
    cin >> tam_tubo;
    long long int n_tapetes;
    cin >> n_tapetes;
    long long int soma = 0;
    long long int tam_atual = 0;
    while (tam_tubo > 0) {
        // cout << "Soma: " << soma << endl;
        // cout << "tam_tubo: " << tam_tubo << endl;
        // cout << "n_tapetes: " << n_tapetes << endl;
        tam_atual = tam_tubo - n_tapetes + 1;
        // cout << "tam_atual: " << tam_atual << endl;
        soma += tam_atual * tam_atual;
        // cout << "Soma: " << soma << endl;    
        tam_tubo -= tam_atual;
        // cout << "tam_tubo: " << tam_tubo << endl;
        n_tapetes--;
        // cout << "n_tapetes: " << n_tapetes << endl;
    }
    cout << soma;
}
