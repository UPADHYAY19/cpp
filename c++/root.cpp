#include <iostream>
using namespace std;
int sqrt(int n) {
	if (n < 2) {
		return n;
	}
	int low = 1, high = n;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (mid * mid == n) {
			return mid;
		} else if (mid * mid < n) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return -1;
}

int main() {
	int n;
    cin>>n;
	cout << sqrt(n) << endl;                                    
	return 0;
}
