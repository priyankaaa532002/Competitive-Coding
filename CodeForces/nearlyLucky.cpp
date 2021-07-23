#include <iostream>
using namespace std;

int main(){
    long long int num;
    cin>>num;
    long long int  key = 0;
    long long int key1 = 0;


    while(num>0){
        long long int ld = num%10;
        if(ld == 4){
            key=key+1;
        }else if(ld == 7){
            key1=key1+1;
        }
        num=num/10;
    }

    if(key+key1 == 4 || key+key1 == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
