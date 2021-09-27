#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int g1,g2,s1,s2,b1,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        if ((g1+s1+b1) > (g2 + b2 + s2))
        {
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
        t--;
    }
    return 0;
}