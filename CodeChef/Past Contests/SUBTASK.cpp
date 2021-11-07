#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1){
                count++;
            }
        }

        if (count == n)
        {
            cout<<100<<"\n";
        }else{
            int count2 = 0;
            for (int i = 0; i < m; i++)
            {
                if (arr[i] == 1)
                {
                    count2++;
                }
            }
            if (count2 == m)
            {
                cout<<k<<"\n";
            }else{
                cout<<0<<"\n";
            }
            
        }
        
        
    }
    return 0;
}