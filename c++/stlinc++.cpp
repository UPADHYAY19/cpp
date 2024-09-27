#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> a;

    cout << "Enter " << n << " numeric values for the vector:\n";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        a.push_back(value);
    }

    cout << "The vector you entered is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
