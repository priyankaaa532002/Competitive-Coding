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
        cin>>n;
        string a,b;
        cin>>a>>b;
        // string s= "hello";
        // cout<<s.erase(0,1);
        
        int count = 0;
        bool last = b[n-1]>a[n-1];
        if(last == true){
            count++;
        }
        for(int i = n-2; i>=0 ;i--){
            if(b[i]>a[i]){
                last = true;
                count++;
            }else if(b[i]<a[i]){
                last = false;
            }else{
                if(last){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}