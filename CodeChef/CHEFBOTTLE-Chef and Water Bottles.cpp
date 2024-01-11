#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if((z/y)<=x)
        {
            cout<<z/y<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
