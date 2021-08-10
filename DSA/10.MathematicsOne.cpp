#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


void factorial(int n){
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac*i;
    }
    cout<<fac<<"\n";
}

void trailingZerosInFactorial(int n){
    int zeros = 0;
    for (int i = 5; i <= n; i=i*5)
    {
        zeros = zeros + n/i;
    }
    cout<<zeros<<"\n";
    
}


vector<bool> seiveOfErathosthenes(int n){//10
    vector<bool> isPrime(n+1,true); //{11 elements all true}
    isPrime[0] = false; 
    isPrime[1] = false;

    //2 -->3
    for (int i = 2; i * i<= n; i++)
    {              //4           -> 6 ->8 ->10
                // 6 --> 9
        for (int j = 2*i; j <= n; j+=i)
        {
            isPrime[j] = false;
        }   
    }
    return isPrime;
    
}

void prime(int n){
    int flag = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag ==1){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    factorial(5);
    trailingZerosInFactorial(5);

    vector<bool> isPrime = seiveOfErathosthenes(20);
    for (int i = 0; i <= 20; i++)
    {
        cout<<i<<" "<<isPrime[i]<<"\n";
    }

    prime(4);
    

    
    return 0;
}