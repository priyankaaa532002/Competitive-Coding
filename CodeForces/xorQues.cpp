#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n,t;
	cin>>t;
	while(t--)
	{
		int count = 0;
		cin>>n;
		while(n>=0){
			if( ((n)%mod ^(n+1)%mod)%mod - ((n+2)%mod^(n+3)%mod)%mod == 0)
			// 1 ^ 2 - 3^4 = 0
				count ++;
			n--;
		}
	
		cout<<count<<"\n";
	}
	return 0;
}