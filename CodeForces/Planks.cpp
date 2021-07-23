#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n,k;
	cin>>n>>k;

	int arr[n];

	//1 2 6 1 1 7 1
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int min = arr[0]+arr[1]+arr[2];
	int index = 0;
	for (int i = 0; i < (n - k + 1) ; i++)
	{
		int sum = 0;
		for (int j = i; j < i+k; j++)
		{
			sum += arr[j];
		}
		if (sum < min)
		{
			min = sum;
			index = i;
		}
	}
	
	cout<<index+1;
	
	return 0;
}