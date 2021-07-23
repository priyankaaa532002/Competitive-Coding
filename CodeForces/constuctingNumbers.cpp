#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
// Complete the solve function below.
int solve(int n) {
    int temp = n;
    int sumOfDigits = 0;
    int sumIfFactors = 0;
    
    while(n > 0){
        int ld = n % 10;
        sumOfDigits += ld;
        n = n/ 10;
    }
    
    int sum = 0;
    for (int i = 1; i <= temp; i++) {
        if (temp % i == 0) {
            if (isPrime(i))
                sum += i;
        }
    }
    
    if(sumOfDigits == sum){
        return 1;
    }
    else{
        return 0;
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
