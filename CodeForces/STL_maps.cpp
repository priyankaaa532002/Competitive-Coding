#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    // keyValue pair
    // (2,3) (4,5)
    map<int,int> a;
    a[1] = 100;
    a[2] = -1;
    a[3] = 200;
    a[10002023] = 1;

    a.erase(1);


    map<char,int> cnt;
    string x = "rachit jain";

    for(char c: x){
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['z']<<"\n";
    return 0;
}