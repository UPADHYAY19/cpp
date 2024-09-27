#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        
        int count2 = 0;

       
        for (int i = 0; i < n; i++) {
            sum = sum + a[i];
            if (sum > m) {
                count2++;
                sum =0;
            }
        }
       

       
        int ans = count2;
        cout << ans << endl;
    }
    return 0;
}
