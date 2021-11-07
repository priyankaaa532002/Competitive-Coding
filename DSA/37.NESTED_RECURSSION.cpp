#include <iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return n - 10;
    }else{
        return fun(fun(n+11));
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int r;
    r = fun(95);
    cout<<r<<" ";
    return 0;
}