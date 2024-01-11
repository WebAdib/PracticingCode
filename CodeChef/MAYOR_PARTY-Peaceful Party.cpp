#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+c>b)
        {
            cout<<a+c<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}
