#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	    if((a+b+c)==180)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}

