#include <bits/stdc++.h>
using namespace std;

int main() {
    int np;
    int nq;
    cin >> np >> nq;
    vector <int> pigeons(np + 1); // array that say for each pigeon (position) which nest he is (value)
    
    for (int i = 0; i < np + 1; i++) {
        pigeons[i] = i;
    }

    for (int i = 0; i < nq; i++) {
        int q1;
        cin >> q1;
        if (q1 == 1) {
            int q2;
            int q3;
            cin >> q2 >> q3;
            pigeons[q2] = q3;
        }
        else if (q1 == 2) {
            int n_nests = 0;
            vector <int> used_nests;
            for (int i = 1; i < np; i++) {
                if (find(used_nests.begin(), used_nests.end(), pigeons[i]) != used_nests.end()) {
                    n_nests++;
                }
                else {
                    used_nests.push_back(pigeons[i]);
                }
            }
            cout << n_nests << endl;
        }
    }
}
