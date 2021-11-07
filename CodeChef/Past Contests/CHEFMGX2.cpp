#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve_of_eratosthenes(int n){
    vector<bool> is_prime(n+1,true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i*i <= n; i++)
    {
        if (is_prime[i]==true)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    return 0;
}