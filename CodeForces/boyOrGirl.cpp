#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    cin>>data;

    int count = 1;

    sort(data.begin(), data.end());

    for(int i = 0; i < data.length() - 1 ; i++){
        if(data[i] != data[i+1]){
            count += 1;
        }
    }

    if(count % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}