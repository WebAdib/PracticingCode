#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i];

    }
    for(int i=0;i<n;i++)
    {
        t = m[i];
        int ans;
        ans = t/2;
        cout<<ans+1;
        cout<<endl;


    }
}

