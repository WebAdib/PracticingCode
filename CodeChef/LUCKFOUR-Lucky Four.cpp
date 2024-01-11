#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int count =0;
        int f=0;
        while(n>0)
        {
            f = n%10;
            if(f==4)
            {
                count++;
            }
            n=n/10;

        }
        cout<<count;
        cout<<endl;
    }

}
