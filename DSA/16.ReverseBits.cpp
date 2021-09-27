#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> setBits(int n){
    vector<int> v;

    int count = 0;
    while (n>0)
    {
        if((n&1) == 1){
            v.push_back(count);
        }
        count++;
        n=n>>1;
    }
    return v;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int x = 0;
    vector<int> v1 = setBits(n);
    for (int i = 0; i < v1.size(); i++)
   {
       int mask = 1<<(31 - v1[i]);
       cout<<mask;
       x = x|mask;
   }
    cout<<x;
    
    return 0;
}