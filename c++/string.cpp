#include <iostream>
#include <string>
using namespace std;

string solve(string s1, string s2) {
    int l1 = s1.length();
    int l2 = s2.length();
    if (l1 > l2) {
        return "String s1 is greater than s2";
    } else if (l1 == l2) {
        return "Length of both strings are equal";
    } else {
        return "Length of both strings are not equal";
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    string ans = solve(s1, s2);
    cout << ans << endl;
    return 0;
}
