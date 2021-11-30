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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i]%2) != 0 )
            {
                odd_count++;
            }
        }
        cout<<odd_count/2<<"\n";
    }
    return 0;
}