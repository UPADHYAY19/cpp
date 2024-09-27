#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int N;
        cin >> N;
        vector<int>arr(N);
        for (int i = 0; i < N; ++i) {
            cin >>arr[i];
        }

        sort(arr.begin(),arr.end());

        int maximum = 0;

        for (int i = N - 1; i >= 0; i--) {
            int total =arr[i] * (N - i);
            maximum = max(maximum, total);
        }

        cout << maximum << endl;
    }
    return 0;
}
