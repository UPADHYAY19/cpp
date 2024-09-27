#include <bits/stdc++.h>
using namespace std;

int main() {
	
	    int count =0;
        char a;
        cin>>a;
        char b;
        cin>>b;
        char c;
        cin>>c;
        char d;
        cin>>d;
        char e;
        cin>>e;
        char f;
        cin>>f;
        
	    for(int i =0;i<6;i++)
        {
            if(i == 'w')
            {
                count++;
            }
            else
            {
                break;
            }
        }
	   if(count ==3)
	   {
	       cout<<"yes"<<endl;
	   }
	   else
	   {
	       cout<<"no"<<endl;
	   }
	    
	}



