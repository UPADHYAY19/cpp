#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        long long n, k;
        cin >> n >> k;

        for (long long i = 1; i <= k; i++) {
            cout << i << " ";
        }

        long long f, o;
        f = k + 2;
        while (f <= n) {
            cout << f << " ";
            f = f + 2;
        }

        o = k + 1;
        while (o <= n) {
            cout << o << " ";
            o += 2;
        }

        cout << endl;
    }

    return 0;
}
