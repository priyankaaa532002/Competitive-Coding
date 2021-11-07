#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i]==str[i+1])
            {
                ans = 1;
                break;
            }
        }
        if(ans == 1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}