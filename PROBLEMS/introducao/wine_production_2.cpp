#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n_days, n_grapevines;
    cin >> n_days >> n_grapevines;

    vector<long long> temperatures(n_days);
    for (long long i = 0; i < n_days; ++i) {
        cin >> temperatures[i];
    }

    vector<vector<long long>> grapevines(n_grapevines, vector<long long>(2));
    for (long long i = 0; i < n_grapevines; ++i) {
        cin >> grapevines[i][0] >> grapevines[i][1];
    }

    for (long long i = 0; i < n_grapevines; ++i) {
        long long start = grapevines[i][0] - 1;
        long long end = grapevines[i][1];

        unordered_map<long long, int> freq;
        long long max_reps = 0;

        for (long long j = start; j < end; ++j) {
            long long temp = temperatures[j];
            freq[temp]++;
            if (freq[temp] > max_reps) {
                max_reps = freq[temp];
            }
        }

        long long n_difs = freq.size() - 1;
        long long quality = min(n_difs, max_reps);

        cout << quality << '\n';
    }
}
