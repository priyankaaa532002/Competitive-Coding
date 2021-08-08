#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int num = 6;
    //110
    int count = 0;

    while (num & 1 != 1)
    {
        count++; 
        num = num>>1;
        //011
    }
    

}