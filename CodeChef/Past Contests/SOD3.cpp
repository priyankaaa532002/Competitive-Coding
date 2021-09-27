#include <iostream>
using namespace std;

bool isDivisible(unsigned long long int n){

    unsigned long long int sum = 0;
    while (n>0)
    {
        unsigned long long int ld = n%10;
        sum += ld;
        n = n/10;
    }
    if(sum%3 == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; 
    cin>>t;
    while (t>0)
    {
        unsigned long long int l,r;
        cin>>l>>r;

        unsigned long long int count = 0;
        for (unsigned long long int i = l; i <= r; i++)
        {
            if(isDivisible(i)){
                count++;
            }
        }
        
        cout<<count<<"\n";
        t--;
    }
    

    return 0;
}