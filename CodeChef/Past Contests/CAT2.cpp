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
        cin>>n;
        int sum = 0;
        while(n>0){
            int ld = n % 10;
            sum += ld;
            n = n/10;
        }
        cout<<sum<<"\n";
        t--;
    }
    return 0;
}