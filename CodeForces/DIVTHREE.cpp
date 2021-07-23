#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;
	int n,k,d;
	int arr[n];
	while(t>0)
	{
		cin>>n>>k>>d;
		int sum = 0;
		int ans = 0;

		for(int i = 0 ; i < n ; i ++)
		{
			cin>>arr[i];
			sum += arr[i];
		}
		ans= sum/k;
		cout<<min(ans,d)<<"\n";
		t--;
	}

	return 0;
}