#include <bits/stdc++.h>
using namespace std;

int sumDigit(int num){
    int sum = 0;
    while(num>0){
        int ld = num%10;
        sum += ld;
        num = num/10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int ans = 0;
    int max = 0;
        for(int i = 1; i<= n; i++){

        if(n%i == 0){
            if(sumDigit(i)>max){
                max = sumDigit(i);
                ans = i;
            }
        }
    }
    
    cout<<ans;

    return 0;
}
