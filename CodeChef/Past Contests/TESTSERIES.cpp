#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int in=0,e=0,d=0;
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < 5; i++)
        {
            if(arr[i] == 0){
                d++;
            }else if(arr[i] == 1){
                in++;
            }else{
                e++;
            }
        }

        if (in>e)
        {
            cout<<"INDIA\n";
        }else if(e>in){
            cout<<"ENGLAND\n";
        }else{
            cout<<"DRAW\n";
        }
    }
    return 0;
}