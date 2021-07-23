#include <iostream>
#include <string>
using namespace std;

int main(){
    string one;
    string two;
    cin>>one;
    cin>>two;

    int len = one.length();
    string three = "";

    for(int i = 0; i<len ; i++){
        if(one[i]!=two[i]){
            three += "1";
        }
        else{
            three += "0";
        }
    }
    cout<<three;
}