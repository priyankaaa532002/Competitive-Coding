#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a+b+c <= d){
            cout<<"1\n";
        }else if(b+c <= d || a+b <=d || c+a<=d){
            cout<<2<<"\n";
        }else{
            cout<<3<<"\n";
        }
    }
    return 0;
}