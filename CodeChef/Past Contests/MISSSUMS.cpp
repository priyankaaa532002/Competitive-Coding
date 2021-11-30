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

        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            cout<<count<<" ";
            count += 2;
        }
        cout<<"\n";
    }
    return 0;
}