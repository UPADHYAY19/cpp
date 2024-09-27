#include<bits/stdc++.h>
using namespace std;
int main()
{
      // agar bas yes or no print karan hai to ye code hoha
        vector<int>n ={3,2,4};
        sort(n.begin(),n.end());
        int t = 6;
      
        int l = n.size();
        int i =0;
        int j = l-1;
        while(i<j)
        {
            if(n[i]+n[j]==t)
            {
               
            cout<<"yes";
            break;
            
            }
            else if(n[i]+n[j]>t)
            {
                j--;
            }
            else
            {
                i++;
            }

        }
        if(i==j || i>j || j<i)
        {
            cout<<-1<<endl;
        }
        

      
    }
