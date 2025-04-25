#include <bits/stdc++.h>
using namespace std;

int in(int a, int b) {
    if (a <= b) return a;
    return b;
}

int main() {
    long long int n_days_of_temperature_measurement;
    long long int n_of_grapevines;
    cin >> n_days_of_temperature_measurement >> n_of_grapevines;

    long long int temperatures[n_days_of_temperature_measurement];
    for (int i = 0; i < n_days_of_temperature_measurement; i++)
        cin >> temperatures[i];
    
    long long int grapevines[n_of_grapevines][2];
    for (int i = 0; i < n_of_grapevines; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> grapevines[i][j];
        }
    }

    for (int i = 0; i < n_of_grapevines; i++) {
        long long int registers[n_days_of_temperature_measurement][2];
        int index_registers = 0;
        
        for (int j = grapevines[i][0] - 1; j < grapevines[i][1]; j++) {
            int temp_atual = temperatures[j];
            bool repetido = false;
            for (int k = 0 ; k < index_registers; k++) {
                if (registers[k][0] == temp_atual) {
                    registers[k][1]++;
                    repetido = true;
                    break;
                }
            }
            if (repetido == false) {
                registers[index_registers][0] = temp_atual;
                registers[index_registers][1] = 1;
                index_registers++;
            }
        }

        int n_difs = index_registers - 1;
        int max_reps = 1;
        for (int j = 0; j < index_registers; j++) {
            if (registers[j][1] > max_reps)
                max_reps = registers[j][1];
        }

        int quality = min(n_difs, max_reps);

        cout << quality << endl;
    }
    
}
