#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[3] = {a,b,c};
        sort(arr,arr+3);
        int ans= arr[1] + arr[2];
        cout<<ans<<"\n";
        t--;
    }
    
    return 0;
}