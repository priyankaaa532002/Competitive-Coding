#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        if((n+1)*y < x){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}