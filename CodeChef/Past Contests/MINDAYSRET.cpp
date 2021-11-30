#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        float n,k;
        cin>>n>>k;
        float ans = (n/k);
        cout<<ceil(ans)<<"\n";
    }
    return 0;
}