#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        while (k>0)
        {
            x += a;
            y += b;
            k--;
        }
        if (x<y)
        {
            cout<<"PETROL\n";
        }else if(y<x){
            cout<<"DIESEL\n";
        }else{
            cout<<"SAME PRICE\n";
        }
    }
    return 0;
}