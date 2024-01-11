#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int ans=0;
        while(n>0)
        {
            ans = ans + n%10;
            n = n/10;
        }
        cout<<ans;
        cout<<endl;

    }




}


