#include <iostream>
#include <string>
using namespace std;
int main(){
    string one;
    string two;

    string one1;
    string two2;
    int key = 0;

    cin>>one;
    cin>>two;
    int len = one.length();
    

    for(int i = 0; i< len; i++){
        one1 += toupper(one[i]);
    }

    for(int i = 0; i< len; i++){
        two2 += toupper(two[i]);
    }

    for(int i = 0; i< len ; i++){
        if(one1[i] != two2[i]){
            if(one1[i] > two2[i]){
                key = 1;
                break;
                
            }
            else{
                key = -1;
                break;
                
            }
        }
    }

    cout<<key;

}