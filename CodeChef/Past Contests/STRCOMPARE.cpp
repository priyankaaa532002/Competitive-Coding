#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        reverse(a.begin(), a.end());
        // string s= "hello";
        // cout<<s.erase(0,1);
        int count = 0;
        // while(n>0){
        //     if(a<b){
        //         count++;
        //     }
        //     a.erase(0,1);
        //     b.erase(0,1);
        //     n--;
        // }
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i]){
                count ++;
            }
        }
        

        cout<<count<<"\n";
    }
    return 0;
}