#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        for(int i = 0; i <n ; i++){
            cin>>arr[i];
        }

        int player = arr[n-1];
        int greatest = 0;
        
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>greatest)
            {
                greatest = arr[i];
                //index = i;
            }
        }
        if (player>greatest)
        {
            cout<<"Yes\n";
        }
        else{
            for(int i = 0 ; i < l-1 ; i++){
            arr[n-1] += k;
            }

            int player = arr[n-1];
        
            int greatest = 0;
        
            for (int i = 0; i < n-1; i++)
            {
                if (arr[i]>greatest)
                {
                    greatest = arr[i];
                    //index = i;
                }
            }

            //cout<<player<<"\n";
            //cout<<greatest<<"\n";
            if(player>greatest){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }

        t--;
    }
    return 0;
}