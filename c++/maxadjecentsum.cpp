#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n); // Using vector for dynamic size and 0-based indexing

        for (int i = 0; i < n; i++) { // 0-based indexing for input
            cin >> a[i];
        }

        int mx = -1;
        for (int x = 1; x <= k; x++) { // Try each value for k
            vector<int> temp = a; // Copy original array to temp
            for (int i = 0; i < n; i++) {
                temp[i] = x;
            }
            int sum = 0;
            for (int i = 0; i < n - 1; i++) {
                sum += abs(temp[i] - temp[i + 1]);
            }
            mx = max(mx, sum);
        }

        cout << mx << endl;
    }
    
}
