#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x%10!=0)
        {
            cout<<x/10 +1<<endl;
        }
        else
        {
            cout<<x/10<<endl;
        }
    }
    return 0;
}
