#include <iostream>
using namespace std;

int x =0;
int fun(int n){
    //static int x = 0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int r;
    r = fun(5);
    cout<<r<<"\n";
    r = fun(5); // value of x will initially be 5
    // on incrementing it goes till 10 
    // 5 times repeated therefore total is 50
    cout<<r<<"\n";
    return 0;
}