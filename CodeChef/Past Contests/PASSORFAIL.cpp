#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int wrong = n - x;
        int sum = x*3 - wrong;
        if (sum>=p)
        {
            cout<<"PASS\n";
        }else{
            cout<<"FAIL\n";
        }
    }
    return 0;
}