#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
        {
            cout<<"CAR"<<endl;
        }
        else if(x<y)
        {
            cout<<"BIKE"<<endl;
        }
        else
        {
            cout<<"SAME"<<endl;
        }
    }

    return 0;
}
