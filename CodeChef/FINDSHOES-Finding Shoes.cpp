#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=y)
        {
            cout<<(2*x)-y<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
