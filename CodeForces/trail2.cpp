#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t>0)
	{
		int x,a,b;

		cin>>x>>a>>b;
		int ans;
		ans = a+(100-x)*b;
		cout<<ans;
		t--;
	}

	return 0;
}