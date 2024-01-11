#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x%10 == 0)
        {
            cout<<x/10<<endl;
        }
        else if(x%10 == 5)
        {
            cout<<x/10 + 1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
