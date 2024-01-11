#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((21-(x+y))>10)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<(21-(x+y))<<endl;
        }
    }
    return 0;
}
