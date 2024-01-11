#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+x);
        int count = 0,sum=0;
        for(int j=x-1;j>=0;j--)
        {
            sum+=arr[j];
            count++;
            if(sum >= y)
            {
                break;
            }
        }
        cout<<x-count<<endl;
    }

    return 0;
}
