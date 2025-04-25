#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> gabarito(N);
    vector<char> respostas(N);

    for (int i = 0; i < N; i++)
        cin >> gabarito[i];

    for (int i = 0; i < N; i++)
        cin >> respostas[i];

    int acertos = 0;

    for (int i = 0; i < N; i++) {
        if (gabarito[i] == respostas[i])
            acertos++;
    }

    cout << acertos;
}
