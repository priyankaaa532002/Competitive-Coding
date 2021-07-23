#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

//int modulo(int a, int b) {return (b + (a % b)) % b;}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll t;
	cin>>t;
	ll n;

	while(t>0)
	{
		cin>>n;

		vector<int> sum = {0,20,36,51};

		ll ans = 0;
		int top = n%4;
		ll height = n/4;

		ll enclosed = (height - 1) * 44 + 60;
		if(height == 0)
		{
			ans = sum[n];
		}
		else
		{
			ans = enclosed - 4*top + sum[top];
		}
		cout<<ans<<"\n";
		
		t--;
	}
	return 0;
}