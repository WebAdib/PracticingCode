#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x>65)
        {
            cout<<"Overload"<<endl;
        }
        else if(x<35)
        {
            cout<<"Underload"<<endl;
        }
        else{
            cout<<"Normal"<<endl;
        }
    }
    return 0;
}
