#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i< n; i++)
    {
        if (n%i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int steps = 0;
        for (int i = x; i < y; i++)
        {
            if ((isPrime(i+2)==1) && (i+2 <= y))
            {
                steps++;
                //cout<<"prime is "<<i+2<<"\n";
                //cout<<i<<" "<<i+2<<" steps "<<steps<<endl;
                i++;
            }else{
                steps++;
                //cout<<i<<" "<<i+1<<" steps "<<steps<<endl;
                //i++;
            }
        }
        cout<<steps<<"\n";
    }

    return 0;
}