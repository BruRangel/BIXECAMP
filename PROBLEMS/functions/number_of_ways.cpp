#include <bits/stdc++.h>
using namespace std;

int now(int S, int E) {
    if (S > E) return 0;
    if (S == E) return 1;
    if (S < E)
        return now(S + 1, E) + now(S + 2, E) + now(S + 3, E);
    return 0; // Adicionado para evitar o aviso do compilador
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << now(S, E);
}
