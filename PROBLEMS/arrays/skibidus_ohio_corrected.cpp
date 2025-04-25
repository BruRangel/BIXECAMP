#include <bits/stdc++.h>
using namespace std;

/*
To solve this problem, we need to determine the minimum possible lenght of a string after performing a series of operations where consecutive identical characters are merged.
The key insight is that if the string contains at least one pair of consecutive characters, it can be reduced to a single character through optimal operations.
Otherwise, the lenght remains unchanged.
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                found = true;
                break;
            }
        }
        cout << (found ? 1 : s.size()) << endl;
    }
}
