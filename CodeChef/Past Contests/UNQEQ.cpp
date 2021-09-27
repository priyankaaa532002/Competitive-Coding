#include <iostream>
#include <vector>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t; 
    cin>> t;
    while(t>0){
        int n;
        cin>>n;

        if((n/2)%2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
            t--;
            continue;
        }

        int m = n/2;
        vector<int> a;
        vector<int> b;

        for(int i = 1; i <= m/2; i++){
            a.push_back(i);
        }
        for(int i = n- m/2 +1; i<=n ;i++){
            a.push_back(i);
        }
        for (int i = m/2 + 1; i <= n- m/2; i++)
        {
            b.push_back(i);
        }
        for(int i : a){
            cout<<i<<" ";
        }
        cout<<"\n";
        for(int i : b){
            cout<<i<<" ";
        }
        cout<<"\n";
        t--;
    }
    return 0;
}