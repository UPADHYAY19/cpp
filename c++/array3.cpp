#include <iostream>
#include <vector>

using namespace std;

const int MAX_VALUE = 100000;  

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    int count[MAX_VALUE] = {0};

    
    for (int i = 0; i < n; ++i) {
        count[arr[i]]++;
    }

    
    cout << "Number of occurrences for each element:" << endl;
    for (int i = 0; i < MAX_VALUE; ++i) {
        if (count[i] > 0) {
            cout << i << ": " << count[i] << " times" << endl;
        }
    }

    return 0;
}
