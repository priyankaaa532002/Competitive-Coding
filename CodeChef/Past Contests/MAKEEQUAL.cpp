#include <iostream>
#include <cmath>

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
        int min = INT16_MAX;
        int max = INT16_MIN;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]<min){
                min = arr[i];
            }
            if(arr[i]>max){
                max = arr[i];
            }
        }
         
        cout<<(abs(max)-abs(min))<<"\n";
    }
    return 0;
}