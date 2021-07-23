#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int max = 0;
    int sum = 0;
    int out;
    int in;

    for(int i = 0; i < n; i++){
        cin>>out;
        cin>>in;
       sum -= out;
       sum +=in;

       if(sum > max){
           max = sum;
       }
    }

    cout<<max;
    return 0;
}