#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    vector<int> v = {0,4,7,9};
    sort(v.begin(),v.end());


    int min = v[0] ^ v[1];
    for (int i = 0; i < v.size()-1; i++)
    {
            if((v[i] ^ v[i+1]) < min){
                min = v[i] ^ v[i+1];
            }
    }
    
    cout<<min;
    
    return 0;
}