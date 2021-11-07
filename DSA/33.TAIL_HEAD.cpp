#include <iostream>
using namespace std;
//recurssion

void fun(int n){
    if(n>0)
    {
        //head if func called first
        cout<<n;
        fun(n-1); //tail
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int x = 3;
    fun(x);
    return 0;
}