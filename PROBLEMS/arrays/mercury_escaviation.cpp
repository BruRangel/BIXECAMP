#include <bits/stdc++.h>
using namespace std;

/*
The input consists of two lines.

The first line contains a single positive integer n (1≤n≤105)
 — the number of hill in Mercury's horizon.

The second line contains n
 numbers ai (1 ≤ ai ≤ 104)
 — the heights in meters of wach hill.
*/

int main() {
    int n;
    cin >> n;
    int heights[n];
    int min;
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        if (i == 0)
            min = heights[i];
        if (heights[i] < min)
            min = heights[i];
    }
    int mudancas = 0;
    for (int i = 0; i < n; i++) {
        mudancas += heights[i] - min;
    }
    cout << mudancas;
}
