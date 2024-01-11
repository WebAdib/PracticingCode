#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(((3*y)-(x-y))>=z)
        {
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
