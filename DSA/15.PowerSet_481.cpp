#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string s;
    cin>>s;
    int len = s.size();
    vector<string> v;

    for (int i = 1; i < (1<<len); i++)
    {
        string sub = "";
        for (int j = 0; j < len; j++)
        {
            if (i & (1<<j))
            {
                sub += s[j];
            }
        }
        v.push_back(sub);
    }
    
    for (string i : v)
    {
        cout<<i<<" ";
    }
    

    return 0;
}