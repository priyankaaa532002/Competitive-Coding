#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l;
    int drinkT = drink/nl;
    int lime = c*d;
    int salt = p/np;
    int ans;
    // cout<<drinkT<<endl;
    // cout<<lime<<endl;
    // cout<<salt<<endl;

    if(drinkT<lime){
        if(salt<drinkT)
        ans = salt;
        else ans = drinkT;
    }
    else{
        if(salt<lime)
        ans = salt;
        else ans = lime;
    }

    cout<<ans/n;

}