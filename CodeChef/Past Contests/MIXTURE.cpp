#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int a,b;
        cin>>a>>b;
        if(a>0 && b>0){
            cout<<"Solution\n";
        }else if(a>0 && b==0){
            cout<<"Solid\n";
        }else if(b>0 && a==0){
            cout<<"Liquid\n";
        }
        t--;
    }
    return 0;
}