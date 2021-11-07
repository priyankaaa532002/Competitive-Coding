#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1) + n;
    }
}

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }
}

int pow(int m,int n){
    if(n==0){
        return 1;
    }else{
        return pow(m,n-1)*m;
    }
}

int powOpt(int m,int n){
    if(n==0){
        return 1;
    }
    if (n%2 == 0)
    {
        return pow(m*m,n/2);
    }else{
        return m*pow(m*m,(n-1)/2);
    }
    
}

//TAYLOR
double e(int x,int n){
    static double p = 1,f=1;
    double result;
    if(n==0){
        return 1;
    }else{
        result = e(x,n-1);
        p = p*x;
        f = f*n;

        return result + p/f;
    }
}

//TAYLOR OPTIMISED
double eOpt(int x,int n){
    static double s = 1;
    if(n==0){
        return s;
    }
    else{
        s = 1 + x*s/n;
        return eOpt(x,n-1);
    }
}

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int f[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fibonacciOpt(int n){
    if(n<=1){
        f[n] = n;
        return n;
    }else{
        if (f[n-2]==-1)
        {
            f[n-2] = fibonacciOpt(n-2);
        }
        if( f[n-1]==-1){
            f[n-1] = fibonacciOpt(n-1);
        }
        f[n] = f[n-2] + f[n-1];
        return f[(n-2)] + f[(n-1)];
    }
}

//NCR OR COMBINATION
int nCr(int n , int r){
    if(r==0 || n==r){
        return 1;
    }else{
        return nCr(n-1,r-1) + nCr(n-1,r);
    }
}

void TOH(int n, int a, int b , int c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<a<<" to "<<c<<"\n";
        TOH(n-1,b,a,c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cout<<sum(3);
    cout<<fact(5);
    cout<<pow(2,9);
    cout<<powOpt(2,9);
    cout<<"\n"<<e(4,15);
    cout<<"\n"<<eOpt(4,15);
    cout<<"\n"<<fibonacci(6);
    cout<<"\n"<<fibonacciOpt(6);
    cout<<"\n"<<nCr(4,2);
    TOH(3,1,2,3);
    return 0;
}