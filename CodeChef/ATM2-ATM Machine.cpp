#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n],res=k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]<=res)
            {
                res= res - a[j];
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;

    }
    return 0;
}
