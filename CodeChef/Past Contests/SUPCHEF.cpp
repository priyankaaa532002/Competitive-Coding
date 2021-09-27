#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int m,n,k;
        cin>>m>>n>>k;
        if(m <= n*k){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        t--;
    }
    return 0;
}