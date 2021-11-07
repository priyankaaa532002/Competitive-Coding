#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int num = log2(n);
        //cout<<num;
        int left = pow(2,num)/2;
        int right = n - (pow(2,num)) + 1;
        cout<<max(left,right)<<"\n";
    }

    return 0;
}