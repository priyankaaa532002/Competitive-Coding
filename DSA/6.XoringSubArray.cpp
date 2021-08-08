#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    vector<int> v = {3,4,5};
   
        if (v.size() % 2 == 0)
        {
            cout<<0;
        }else{
            int ans = 0;
            for (int i = 0; i < v.size(); i=i+2)
            {
                ans = ans ^ v[i];
            }
            cout<<ans;
        }
        
    return 0;
}


// 1, 2, 3, 4, 5, (1, 2), (2, 3), (3, 4), (4, 5)
// (1,2,3),(2,3,4),(3,4,5)
// (1,2,3,4),(2,3,4,5)
// (1,2,3,4,5)

//{1,2}
//1, 2, (1,2)

//{1,2,3,4}
//1,2,3,4
//(1,2),(2,3),(3,4)
//(1,2,3),(2,3,4)
//(1,2,3,4)