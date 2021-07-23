#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int N,M;
        cin>>N>>M;
        int a,b,x,y;
        cin>>x>>y>>a>>b;

        int diffpol = max(abs(N-a) , abs(M-b));
        int diffthief = abs(N-x) + abs(M-y);

        if(diffthief > diffpol){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        t--;
    }
}