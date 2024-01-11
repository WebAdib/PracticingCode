#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n>=2 && n<=100)
    {
        cout<<n*(n/2);
    }
    return 0;
}
