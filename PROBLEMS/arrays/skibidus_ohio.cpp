#include <bits/stdc++.h>
using namespace std;

int minimum_lenght(vector<string> palavra) {
    bool alterou = true;
    if (palavra.size() == 1) return 1;
    for (int i = palavra.size() - 2; i >= 0; i--) {
        if (palavra[i] == palavra[i + 1]) {
            alterou = true;
            palavra.erase(palavra.begin() + i + 1);
            if (i + 1 <= palavra.size() - 1) {
                palavra[i] = palavra[i + 1];
            }
            else if (i - 1 >= 0) {
                palavra[i] = palavra[i - 1];
            }
        }
        if (alterou) {
            return minimum_lenght(palavra);
        }
        else {
            return palavra.size();
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<string>> palavras(N, vector<string>());

    for (int i = 0; i < N; i++) {
        string palavra_atual;
        cout << palavra_atual;
        cin >> palavra_atual;
        
        for (char c : palavra_atual) {
            palavras[i].push_back(string(1, c));
        }
    }

    /*
    for (auto i = palavras.begin(); i != palavras.end(); i++) {
        
    }
        */
    }
