#include<bits/stdc++.h>
using namespace std;
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        int len3 = str1.length(); - str2.length();
    
        string x = "";
        
         if(len1 == len2 )
        {
            x = "no diviser found";
        }
        else if(len1 > len2 &&  str2 == str1.substr() )
        {
            x= str1.substr(0,len3);
        }

        return x;
    }   
   
int main()
{
  string ans = gcdOfStrings("abcdef" , "abc");
  cout<<ans<<endl;
    return 0;
}