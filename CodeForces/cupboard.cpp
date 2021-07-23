#include <bits/stdc++.h>
using namespace std;

int main(){

    
    int n;
    cin>>n;
    int arr[n][2];
    int count1 = 0;
    int count2 = 0;
    int remain1 = 0;
    int remain2 = 0;

    for(int i = 0; i < n; i ++){
        for(int j = 0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i = 0 ; i < n; i++){
        if(arr[i][0] == 1){
            count1 ++;
        }
    }

    for(int i = 0 ; i < n; i++){
        if(arr[i][1] == 1){
            count2 ++;
        }
    }

    if(count1>(n-count1)){
        remain1 = n - count1;
    }
    else{
        remain1 = count1;
    }

    if(count2>(n-count2)){
        remain2 = n - count2;
    }
    else{
        remain2 = count2;
    }

    cout<<remain1+remain2;
}