#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string data[n];
    for(int i = 0; i<n; i++){
        cin>>data[i];
    }

    int count = 0;
    for(int i = 0; i<n ; i++){
        if((data[i])[1] == '+'){
            count = count + 1;
        }else{
            count = count - 1;
        }
    }

    cout<<count;
}