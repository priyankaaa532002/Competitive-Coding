#include <bits/stdc++.h>
using namespace std;
#define ll mod = 1e9+7


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }

    int q;
    cin>>q;
    while (q > 0)
    {
        sum = sum * 2;
        cout<<sum<<"\n";
        q--;
    }
    
    

    return 0;
}