
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    
    // Renamed variable to avoid conflict with the max_element function
    auto maxElementIterator = *max_element(v.begin(), v.end());
      cout << "The maximum element in the vector is " << maxElementIterator << endl;


    return 0;
}
