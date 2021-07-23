#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int time;
    string data;

    cin>>n>>time>>data;

    for(int i = 0; i<time ;i++){
        for(int j=0; j <n; j++){
            if(data[j] == 'B' && data[j+1]== 'G'){
                data[j]='G';
                data[j+1]='B';
                j++;
            }
        }
    }
    cout<<data<<endl;
}