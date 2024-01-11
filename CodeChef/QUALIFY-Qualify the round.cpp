#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if((y+(z*2))>=x)
        {
            cout<<"Qualify"<<endl;
        }
        else{
            cout<<"NotQualify"<<endl;
        }
    }

    return 0;
}
