#include <iostream>
using namespace std;

int main() {
    long long n_days, n_grapevines;
    cin >> n_days >> n_grapevines;

    // Vetor para temperaturas
    long long* temperatures = new long long[n_days];
    for (long long i = 0; i < n_days; i++) {
        cin >> temperatures[i];
    }

    // Vetor para parreiras (intervalos)
    long long** grapevines = new long long*[n_grapevines];
    for (long long i = 0; i < n_grapevines; i++) {
        grapevines[i] = new long long[2];
        cin >> grapevines[i][0] >> grapevines[i][1];
    }

    for (long long i = 0; i < n_grapevines; i++) {
        long long start = grapevines[i][0] - 1;
        long long end = grapevines[i][1];

        // Array temporário para contar temperaturas (até 200.000 elementos)
        long long* counts = new long long[200001](); // Zera o array
        long long unique = 0;
        long long max_count = 0;

        // Contagem direta sem verificar repetições
        for (long long j = start; j < end; j++) {
            long long temp = temperatures[j];
            if (counts[temp] == 0) unique++;
            counts[temp]++;
            if (counts[temp] > max_count) max_count = counts[temp];
        }

        // Calcula qualidade
        long long quality = min(unique - 1, max_count);
        cout << quality << endl;

        delete[] counts; // Libera memória
    }

    // Limpeza de memória
    delete[] temperatures;
    for (long long i = 0; i < n_grapevines; i++) {
        delete[] grapevines[i];
    }
    delete[] grapevines;

    return 0;
}