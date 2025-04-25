#include <bits/stdc++.h>
using namespace std;

// There are n problems
// The i-th problem takes 5*i minutes to be solved
// He needs k minutes to get to the event
// He will start the contest at 20:00 and need to be there until 00:00

int n_binary_search(int low, int high, int k) {
    
    int mid = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        int time_spent = 0;

        for (int i = 1; i <= mid; i++) {
            time_spent += 5 * i;
        }

        if (time_spent + k == 240)
            return mid;

        if (time_spent + k < 240)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return mid;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << n_binary_search(0, n, k);
}
