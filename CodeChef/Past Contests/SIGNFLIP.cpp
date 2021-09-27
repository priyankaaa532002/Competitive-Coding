#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n ; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < k; i++)
        {
            if(arr[i]<0){
                arr[i]=-arr[i];
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>0){
                ans.push_back(arr[i]);
            }
        }
        
        int sum = 0;
        for (int i:ans)
        {
            sum += i;
        }
        cout<<sum<<"\n";

        t--;
    }
    return 0;
}

