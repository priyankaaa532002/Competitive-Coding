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
        for (int j = 2*i; j <= n; j+=i) //for optimisation use i*i
        {
            isPrime[j] = false;
        }   
    }
    return isPrime;
    //O(N log log N) --> O
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

int gcd(int a, int b){
    //6,9
    if(b == 0) return a;

    return gcd(b, a%b); //(9,6)
    //(6,3)-->//(3,0)--> return hua a ie 3
}

int Solution(int a, int b, int c) {
    c=c%b;
    int pos = c - 1;
    
    int items = a%b;
    while(items > 0){
        pos++;
        items--;
    }
    return pos%b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // factorial(5);
    // trailingZerosInFactorial(5);

    // vector<bool> isPrime = seiveOfErathosthenes(20);
    // for (int i = 0; i <= 20; i++)
    // {
    //     cout<<i<<" "<<isPrime[i]<<"\n";
    // }

    // prime(4);
    // cout<<"\n";

    // cout<<gcd(24,72);
    cout<<Solution(19,10,18);

    return 0;
}