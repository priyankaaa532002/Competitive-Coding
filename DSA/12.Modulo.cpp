#include <iostream>
using namespace std;

long long fastPow(long long a,long long b,int n){
    long long res = 1;
    while (b > 0){
        if ((b&1) != 0) //b%2 
        {
            res = (res%n * a%n)%n;
        }
        a = (a%n * a%n)%n;
        b = b >> 1;// b/2
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cout<<fastPow(3,5,1000000007);
    return 0;
}