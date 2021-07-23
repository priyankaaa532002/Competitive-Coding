#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    //hh:mm:ssPM
    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    int mm = (s[3] - '0') * 10 + (s[4] - '0');
    int ss = (s[6] - '0') * 10 + (s[7] - '0');
    
    if (hh == 12 && s[8] == 'A')
    {
        hh = 0;
    }

    if (hh != 12 && s[8] == 'P')
    {
        hh += 12;
    }

    printf("%02d:%02d:%02d\n",hh,mm,ss);
    return 0;
}