#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string data;
    cin>>data;
    int count = 0;

    for(int i= 0; i<n; i++){
        if (data[i] == data[i+1]){
            count++;
        }
    }

    cout<<count;

}