#include <iostream>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int ans;
		ans = (n+1)/2;
		cout<<ans<<"\n";
		t--;
	}
	return 0;
}