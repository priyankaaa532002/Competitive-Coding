#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int sumOne = a+b;
        int sumTwo = p+q;

        if(a==p && b==q){
            cout<<0<<"\n";
        }
        else if((sumOne%2==0 && sumTwo%2 !=0) || (sumOne%2!=0 && sumTwo%2 ==0) ){
            cout<<1<<"\n";
        }else if(sumOne%2==0 && sumTwo%2 ==0){
            cout<<2<<"\n";
        }else if(sumOne%2!=0 && sumTwo%2 !=0){
            cout<<2<<"\n";
        }

        // if(a==p && b==q){
        //     cout<<0<<"\n";
        // }else if(a==p || b==q){
        //     cout<<1<<"\n";
        // }else{
        //     cout<<2<<"\n";
        // }
    }
    return 0;
}