#include <iostream>
#include<math.h>
using namespace std;

int findPosition(int n) {
        // code here
        //3 --> 011
        int tot = 0;
        int m = n;
        while(n != 0){
            tot++; //0>1>2
            n = n & (n-1);//1
        }
        
        if(tot == 1){
            // int count = 1;
            // while(m & 1 !=1){
            // count ++;
            // m = m>>1;
            // }
            // return count;
            int pos = log2(m & ~(m - 1));
            return pos+1;
        }
        else{
            return -1;
        }
        
    }

int main(){
    int num = 33554432;
    //110
    int count = 0;

    while ((num & 1) != 1)
    {
        count++; 
        num = num>>1;
        //011
    }
    cout<<count<<"\n";
    //cout<<findPosition(33554432);

}