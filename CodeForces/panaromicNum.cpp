#include <iostream>
#include <string>
using namespace std;


bool isPrime(int num){
    for(int i = 2; i< num; i++){
        if(num%i==0)
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int m;
    int key;
    cin>> key;

    for(int i = n+1; ; i++){
        if(isPrime(i)){
             m = i;
             break;
        }
    }
    if(key == m){
        cout << "YES";
    }else{
        cout<< "NO";
    }
}

