#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t; 
    cin>>t;
    while(t>0){
        int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;

        int fuljari,anar,charkha,rem;
        if(x<y){
            anar = p/(b+x*a);
            rem = p%(b+x*a);
            charkha = rem/(c+y*a);
        }else{
            charkha = p/(c+y*a);
            rem = p%(c+y*a);
            anar = rem%(b+x*a);
        }
        cout<<anar+charkha<<"\n";

        t--;
    }
    return 0;
}