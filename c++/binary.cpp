#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int decimalNumber;
    cin >> decimalNumber;

    bitset<32> b(decimalNumber);

    int binaryArray[32];
    for (int i = 0; i < 32; ++i) {
        binaryArray[i] = b[31 - i];
    }

   
    int count = 0;
    for (int i = 0; i < 32; ++i) {
        if(binaryArray[i]==1)
        {
            count++;
        }
        
    }
    cout <<count<<endl;

    return 0;
}
