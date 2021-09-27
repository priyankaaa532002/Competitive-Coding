#include <iostream>
#include <vector>
using namespace std;

vector<int> setBitsInY(int n,int L,int R){
    vector<int> v;

    int count = 0;
    while (n>0)
    {
        if(((n&1) == 1) && count>=L && count <=R){
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
    int x,y,l,r;
    cin>>x>>y>>l>>r;
    int L = l-1;
    int R = r-1;

    vector<int> v1 = setBitsInY(3,L,R);
//    for (int i : v1)
//    {
//        cout<<i<<" ";
//    }
   
   for (int i = 0; i < v1.size(); i++)
   {
       int mask = 1<<v1[i];
       x = x|mask;
   }
   cout<<x;
    return 0;
}





// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0); cout.tie(0);
//     int x,y,l,r;
//     cin>>x>>y>>l>>r;
//     int L = l-1;
//     int R = r-1;

  
//    for (int i = L; i <= R; i++)
//    {
//        int mask = 1<<i;
//        if ((y&mask)!=0){
//            x=x|mask;
//        }
//    }
//     cout<<x;  
//     return 0;
// }