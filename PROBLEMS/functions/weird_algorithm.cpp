#include <bits/stdc++.h>
using namespace std;

int weird_algorithm(int n) {
    cout << n << " ";
    if (n == 1) {
        return n;
    }
    else if (n % 2 == 0) {
        n = n/2;
    }
    else {
        n = n * 3 + 1;
    }
    return weird_algorithm(n);
}

int main() {
    int n;
    cin >> n;
    weird_algorithm(n);
}
