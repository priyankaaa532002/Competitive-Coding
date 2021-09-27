#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int n,p,x,y;
        cin>>n>>p>>x>>y;

        int arr[n];
        for(int i = 0;i < n; i++){
            cin>>arr[i];
        }

        int count = 0;
        for(int i = 0 ; i < p; i++){
            if(arr[i]==0){
                count += x;
            }else if(arr[i] == 1){
                count += y;
            }
        }

        cout<<count<<"\n";
        t--;
    }
    return 0;
}