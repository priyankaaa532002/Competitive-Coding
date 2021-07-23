#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,xr,yr,D;
        cin>>x>>y>>xr>>yr>>D;

        int water,food, ans;
        water = x/xr;
        food = y/yr;

        ans = min(water,food);

        if(D>ans){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        
        t--;
    }
}