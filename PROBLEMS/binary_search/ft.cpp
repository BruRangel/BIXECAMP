#include <bits/stdc++.h>
using namespace std;

int n_binary_search(int low, int high, int k) {
    int best = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int time_spent = 0;
        
        for (int i = 1; i <= mid; i++)
            time_spent += 5 * i;
            
        if (time_spent + k <= 240) {
            best = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return best;
}

int main () {
    int n, k;
    cin >> n >> k;
    cout << n_binary_search(0, n, k);
}