#include<iostream>
#include<math.h>
using namespace std;

void findIthBit(int n, int i){
    int mask = 1<<i;
    if((n & mask) == 0){
        cout<<"ith bit is 0";
    }else{
        cout<<"ith bit is 1";
    }
}

void setIthBit(int n,int i){
    int mask = 1<<i;
    //findIthBit(n,i);
    n = n|mask;
    //cout<<n;
    //findIthBit(n,i);
}

void clearIthBit(int n,int i){
    int mask = 1<<i;
    findIthBit(n,i);
    mask = ~(mask);
    n = n & mask;
    findIthBit(n,i);
}

void bitsToChange(int a,int b){
    int num = a^b;
    
    int count = 0;
    // to count number of 1s in a binary num
    while(num != 0){
        num = num & (num - 1);
        count ++;
    }
    cout<<count;
}

void noOfBits(int num){
    int no = log2(num) +1;
    cout<<no;
}
int main(){
    
    //findIthBit(6,1);
    //setIthBit(6,0);
    //clearIthBit(6,1);
    //bitsToChange(6,6);
    noOfBits(6);

}