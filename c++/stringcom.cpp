#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> arr = {'a', 'b', 'b'};
    int n = arr.size();
    int i = 0;
    int count = 1; 

    for (int j = 1; j <= n; j++)
    {
        if(arr[j] == arr[j - 1])
        {
            count++;
        }
        else 
        {
            if (j == n || arr[j] != arr[j - 1]){
            arr[i] = arr[j - 1];
            i++;

            if (count >= 2)
            {
                for (char digit : to_string(count))
                {
                    arr[i] = digit;
                    i++;
                }
            }
            count = 1; 
        }
        }
       
    }

    cout << i << endl;
    return 0;
}
