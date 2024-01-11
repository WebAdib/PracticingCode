#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(y%x==0)
        {
            cout<<(y/x)-1<<endl;
        }
        else{
            cout<<y/x<<endl;
        }
    }
    return 0;
}
