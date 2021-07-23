#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
	int t;
	cin>>t;
	while(t>0){
		int xa, xb, XA, XB;
		cin>>xa>>xb>>XA>>XB;
		int a, b;
		int sum;

		a = XA/xa;
		b = XB/xb;

		sum = a+b;

		cout<<sum<<"\n";
		t--;
	}


	return 0;
}