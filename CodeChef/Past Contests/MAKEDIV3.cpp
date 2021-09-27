#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        long long int n;
        cin>>n;
        long long int start = pow(10,n-1);
        long long int end = pow(10,n);

        for(long long int i = start; i < end; i++){
            if(i%2!=0){
                 if(i%3==0 && i%9!=0){
                cout<<i<<"\n";
                break;
            }
            }
        }
        t--;
    }
    return 0;
}