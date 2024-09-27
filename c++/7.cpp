#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int l = a.size();
        int count = 0;
        for (int i = 1; i < l - 1; i++) {
            if (a[i - 1] < a[i] || i == l - 1) {
                count++;
            } else if (a[i - 1] < a[i + 1] && i - 1 < i + 1 && i + 1 < l) {
                count++;
            }
        }

        if (count >= 3) {
            return true;
        } else {
            return false;
        }
    }
};
