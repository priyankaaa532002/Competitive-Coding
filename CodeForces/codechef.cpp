#include <bits/stdc++.h>
using namespace std;
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		int flag = 0;
		cin>>n>>x>>k;
		
		if(x%k==0 || (n+1 - x) % k == 0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
}
	return 0;
}