#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        
        int n,a,b,c;
        cin>>n>>a>>b>>c;

        int count = 0;

        while((b>0 && a>0) || (b>0 && c>0)){
            if(a>0 && b>0){
                count++;
                b--;
                a--;
            }
            
            if(c>0 && b>0){
                count++;
                b--;
                c--;
            }
        }

        if(n<=count){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        t--;
    }
    return 0;
}