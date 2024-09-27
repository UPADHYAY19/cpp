#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        
        int currentX = 0, currentY = 0;
        bool flag = false;
        
        for (int i = 0; i < n; i++) {
            char d = s[i];
            if (d == 'R') currentX++;
            if (d == 'U') currentY++;
            if (d == 'L') currentX--;
            if (d == 'D') currentY--;
            
            int diffX = abs(x - currentX);
            int diffY = abs(y - currentY);
            if (diffX + diffY == i + 1) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        
        if (!flag) {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
