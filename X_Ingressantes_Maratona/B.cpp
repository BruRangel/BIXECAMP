#include <bits/stdc++.h>
using namespace std;

int main() {
    int to, tp;
    cin >> to >> tp;
    int t_max = 60;
    int t_espera;
    if (tp > to) {
        t_espera = t_max - tp;
    }
    else {
        t_espera = t_max - to;
    }
    cout << t_espera;
}
