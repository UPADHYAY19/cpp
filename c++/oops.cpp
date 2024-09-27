#include <bits/stdc++.h>
using namespace std;
class Area
{
public:
    int len;
    int bre;
    Area(int l, int b)
    {
        len = l;
        bre = b;
    }
    void cal(int len,int bre)
    {
        int r = len * bre;
        cout << r << endl;
    }
    
};
class shape :Area
{
    public:
    int side;
    shape(int a)
    {
        side =a;
    }
    

};

int main()
{
     int a;
     cin>>a;
     int b;
     cin>>b;

    shape s;
   
    s.cal(a,b);
}
