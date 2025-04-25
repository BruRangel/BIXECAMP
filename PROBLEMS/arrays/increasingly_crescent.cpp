#include <bits/stdc++.h>
using namespace std;

int main() {
    bool res = true;
    int n;
    cin >> n;
    int atual;
    if (n != 0)
        cin >> atual;
    int ant;
    for (int i = 1; i < n; i++) {
        ant = atual;
        cin >> atual;
        if (atual <= ant) {
            res = false;
            printf("No");
            break;
        }
    }
    if (res)
        printf("Yes");
}