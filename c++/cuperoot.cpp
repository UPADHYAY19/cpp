#include <iostream>
using namespace std;
int main()
{
    cout << "enter the num" << endl;
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i * i * i == n)
        {
            cout << "cuberoot of num in"
                 << " " << i << endl;
        }
    }
    return 0;
}