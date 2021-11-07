#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int n ,k;
        cin>>n>>k;

        if(n==k){
            for(int i = 1; i <=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else if( k == n-1){
            cout<< -1<<"\n";
        }else{
            for (int i = 1; i <= k; i++)
            {
                cout<<i<<" ";
            }
            for (int i = k+2; i <= n; i++)
            {
                cout<<i<<" ";
            }
            cout<<k+1<<"\n";
        }
        t--;
    }
    return 0;
}