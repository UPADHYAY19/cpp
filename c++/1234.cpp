#include <bits/stdc++.h> 
using namespace std; 

void display(int a[], int n) 
{ 
  for (int i = 0; i < n; i++) { 
    cout << a[i] << " "; 
  } 
  cout << endl; 
} 

vector<vector<int>> findPermutations(int a[], int n) 
{ 
  vector<vector<int>> permutations;  

  sort(a, a + n); 

  cout << "Possible permutations are:\n"; 
  do { 
    display(a, n); 
    vector<int> temp(a, a + n);  
    permutations.push_back(temp); 
  } while (next_permutation(a, a + n));

  return permutations;  
} 

int main() 
{ 
  int a[] = { 10, 20, 30, 40 }; 
  int n = sizeof(a) / sizeof(a[0]); 

  vector<vector<int>> temp = findPermutations(a, n);
  int count = 0;

  return 0; 
}
