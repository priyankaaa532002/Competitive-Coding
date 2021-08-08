#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n = 234567;
    int rev = 0;
    while(n>0){
        
        int ld = n%10;
        rev = (rev*10) + ld;
        n = n/10;
    }
    cout<<rev;
    return 0;
}