#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        if(sum%2==0){
            cout<<"Bob\n";
        }else{
            cout<<"Alice\n";
        }
    }
    return 0;
}