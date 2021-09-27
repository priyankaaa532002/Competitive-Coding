#include <iostream>
using namespace std;

void method1(int n){
    if(n<0){
        n = -n;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += n;
    }
    cout<<count<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    method1(5);
    
    return 0;
}