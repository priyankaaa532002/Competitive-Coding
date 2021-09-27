#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int n,k,s;
        cin>>n>>k>>s;
        vector<int>v;
        for (int i = 0; i < 2*n; i+=2)
        {
            v.push_back(i+1);//1 3 5
        }
        int sum = s;
        for (int i: v)
        {
            sum = sum - i;
        }
        //cout<<sum<<"\n";
        int ans = sum/(k-1);
        cout<<ans<<"\n";
        
        t--;
    }
    return 0;
}