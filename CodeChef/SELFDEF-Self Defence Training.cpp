#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int count=0;
        for(int i=0;i<x;i++)
        {
            cin>>y;
            if(y>=10 && y<=60)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
