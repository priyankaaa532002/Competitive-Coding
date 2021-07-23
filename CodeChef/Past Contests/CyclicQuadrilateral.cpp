#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    int a,b,c,d;

    while(t>0)
    {
    cin>>a>>b>>c>>d;

    if((a+c==180) && (b+d==180))
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    t--;
    }
    
    return 0;
}