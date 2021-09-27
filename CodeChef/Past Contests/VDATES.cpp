#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int d,l,r;
        cin>>d>>l>>r;

        if(d<l){
            cout<<"Too Early\n";
        }else if(d>=l && d<=r){
            cout<<"Take second dose now\n";
        }else if(d>r){
            cout<<"Too Late\n";
        }
        t--;
    }
    return 0;
}