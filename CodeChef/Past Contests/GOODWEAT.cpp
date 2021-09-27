#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int n;
        int arr[7];
        for(int i = 0; i < 7; i++){
            cin>>n;
            arr[i] = n;
        }
        int _no = 0;
        int _yes = 0;
        for (int i = 0; i < 7; i++)
        {
            if(arr[i]==0){
                _no++;
            }
            else if(arr[i] == 1){
                _yes++;
            }
        }

        if (_yes>_no)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        t--;
    }
    return 0;
}