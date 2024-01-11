#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a>=1 && a<=357 && b>=1 && b<=357 && c>=1 && c<=357 && d>=1 && d<=357 )
        {
            if((a+c)==180 && (b+d)==180)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
