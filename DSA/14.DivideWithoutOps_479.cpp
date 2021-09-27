#include <iostream>
using namespace std;

void medthodOne(int n,int d){
    //approach 1
    //43-8 35
    //35-8 27
    //27-8 19
    //19-8 11
    //11-8 3    => q = 5
    int count = 0;
    while(n>=d){
        n = n - d;
        count++;
    }
    cout<<count;
}

void methodTwo(int n,int d){
    bool sign = 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    medthodOne(35,3);

    return 0;
}