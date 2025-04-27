#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n_ovos = 0;
    int n_galinhas = 0;
    for (int i = 0; i < n; i++) {
        char atual;
        cin >> atual;
        if (atual == 'O') n_ovos++;
        else if (atual == 'G') {
            if (n_ovos > 0) {
                n_ovos--;
                n_galinhas++;
            }
        }
        else {
            if (n_galinhas > 0) {
                n_ovos++;
                n_galinhas--;
            }
        }
    }
    cout << n_ovos;
}
