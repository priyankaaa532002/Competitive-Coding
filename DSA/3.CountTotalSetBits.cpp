#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    long long int n = 3;
    long long int count = 0;
    for(long long int i = 1; i<=n ;i++){
        long long int j = i;
        while (j != 0)
        {
            j = j & (j - 1);
            count ++;
        }
    }
    cout<<count;
}