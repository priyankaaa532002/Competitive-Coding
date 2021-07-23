#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    


    //declaring
    set<int> s;
    //insert operation -> takes logn time
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    
    for(int x : s){
        cout<< x <<" ";
    }
    cout<<"\n";

    //size
    int length = s.size();
    cout<<length<<"\n";

    //present or not
    auto it = s.find(-1);
    cout<<*it<<"\n";
    if(it == s.end())
    {
        cout<< "not present";
    }
    else
    {
        cout<< "present";
    }
    cout<<"\n";

    //lower(greater than or =) and upper bound(strictly greater)
    auto it2 = s.upper_bound(-1);
    auto it3 = s.upper_bound(0);
    cout<< *it2 << " " << *it3 <<"\n";
    auto it4 = s.upper_bound(2);
    cout<< *it4 << "\n";

    //erase in logN time
    s.erase(1);

    for(int x : s){
        cout<< x <<" ";
    }
    cout<<"\n";

    return 0;
}