#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int a,b,c;
        cin>>a>>b>>c;
        int hardest = min(a, min(b,c));
        if (hardest == c)
        {
            cout<<"Alice\n";
        }else if(hardest == b){
            cout<<"Bob\n";
        }else{
            cout<<"Draw\n";
        }
        t--;
    }
    return 0;
}