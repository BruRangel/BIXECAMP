#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> array, int low, int high, int n) {
    while (low <= high) {
        //int mid = low + (high - low) / 2;
        int mid = (low + high) / 2;

        if (array[mid] == n)
            return mid;

        if (array[mid] < n)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> array(N);
    //int test[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < Q; i++) {
        int atual;
        cin >> atual;
        cout << binary_search(array, 0, N - 1, atual);
    }
}
