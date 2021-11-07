#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <math.h>
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
        string s;
        cin>>n>>s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(j-i == std::abs(s[i] - s[j])){
                    count++;
                }
            }
            
        }
        cout<<count<<"\n";
    }
    
    return 0;
}