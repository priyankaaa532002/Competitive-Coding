// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <set>
// #include <algorithm>
// using namespace std;


// int main() {
//     int q;
//     cin>>q;
//     set<int> s;
//     while(q>0)
//     {
//         int y,x;
//         cin>>y>>x;
        
//         if(y == 1)
//         {
//             s.insert(x);
//         }
//         else if(y == 2)
//         {
//             s.erase(x);
//         }
//         else
//         {
//             auto it = s.find(x);
//             if(it == s.end())
//             {
//                 cout<< "No\n";
//             }
//             else
//             {
//                 cout<< "Yes\n";
//             }
//         }
//         q--;
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int &i : v)
    {
        cin>>i;
    }
    
    int x,a,b;
    cin>>x>>a>>b;
    
    v.erase(v.begin()+(x-1));
    v.erase(v.begin() + (a-1),v.begin()+ b-1);
    
    cout<<v.size()<<"\n";
    for(int &i : v)
    {
       cout<<i<<" "; 
    }
    return 0;
}