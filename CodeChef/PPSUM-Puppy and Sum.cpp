#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{

	    cin>>n>>m;
	    int result = 0;
	    for(int j=0;j<n;j++)
        {
            result = m*(double(m+1)/2);
            m=result;
        }
        cout<<result<<endl;



	}

	return 0;
}
