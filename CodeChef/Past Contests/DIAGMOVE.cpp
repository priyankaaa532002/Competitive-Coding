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
        int x,y;
        cin>>x>>y;

        if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0 & x!=0 && y!=0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        t--;
    }
    return 0;
}