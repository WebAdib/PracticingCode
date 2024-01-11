#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            cout<<x<<endl;
        }
        else if(y>x && y>z)
        {
            cout<<y<<endl;
        }
        else
        {
            cout<<z<<endl;
        }

    }
    return 0;
}
