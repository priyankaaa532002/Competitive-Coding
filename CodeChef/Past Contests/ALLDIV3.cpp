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
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }

        // int check = 1;
        // for(int i = 0; i < n; i++){
        //     if (arr[i]%3!=0)
        //     {
        //         check = 0;
        //         break;
        //     }
        // }

        int sumPlus = 0;
        int sumMin = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]%3==0)
            {
                count++;
            }else if((arr[i]+1) % 3 ==0){
                sumPlus ++;
            }else if ((arr[i]-1) % 3==0){
                sumMin ++;
            }
        }
        
        // int total = count +sumMin +sumPlus;
        if (count==n){
            cout<<0<<"\n";
        }
        else if(sumPlus!=sumMin){
            cout<<-1<<"\n";
        }else if (sumMin==sumPlus){
            cout<<sumMin<<"\n";
        }
    }
    return 0;
}