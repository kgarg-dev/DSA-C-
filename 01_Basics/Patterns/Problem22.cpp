// Problem 22
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= n - i; j--) {
            cout << j << " ";
        }
        int repeat_count = 2 * (n - i - 1);
        for (int j = 0; j < repeat_count; j++) {
            cout << (n - i) << " ";
        }
        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n; j >= n - i; j--) {
            cout << j << " ";
        }

        int repeat_count = 2 * (n - i - 1);
        for (int j = 0; j < repeat_count; j++) {
            cout << (n - i) << " ";
        }
        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
