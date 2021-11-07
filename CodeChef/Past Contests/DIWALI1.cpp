#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t; 
    cin>>t;
    while(t>0){
        long long int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;

        long long int fuljari,anar,charkha,rem;
        anar = b + x*a;
        charkha = c + x*a;
        cout<< p/min(anar,charkha)<<"\n";
        t--;
    }
    return 0;
}