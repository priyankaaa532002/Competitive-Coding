#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t; 
    cin>>t;
    while(t>0){
        int x,y,z;
        cin>>x>>y>>z;

        int tot = x+2*z;
        if (tot>=y)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
        t--;
    }
    return 0;
}