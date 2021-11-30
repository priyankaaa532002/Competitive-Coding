#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=1 && x<100){
            cout<<"Easy\n";
        }else if(x>=100 && x<200){
            cout<<"Medium\n";
        }else if(x>=200 && x<=300){
            cout<<"Hard\n";
        }
    }
    return 0;
}