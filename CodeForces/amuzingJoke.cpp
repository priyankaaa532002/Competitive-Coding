#include <bits/stdc++.h>
using namespace std;

int main(){
    string one;
    string two;
    string three;
    string four;

    cin>>one>>two>>four;

    three = one + two;
    sort(three.begin(),three.end());
    sort(four.begin(),four.end());
    
    if(three == four){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}