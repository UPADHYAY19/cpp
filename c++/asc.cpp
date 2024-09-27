#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>n= { 12, 15, 18, 21, 24 };
	int ans =*__gcd(n.begin(),n.end());
	
	cout << "The GCD of the numbers in the vector is: " <<ans<<endl;
	return 0;
}
