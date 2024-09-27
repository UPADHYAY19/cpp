#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int,int> frequency;

   
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

  
    cout << "Number of occurrences for each element:" << endl;
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << " times" << endl;
    }

    return 0;
}
