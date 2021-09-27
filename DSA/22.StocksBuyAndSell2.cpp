#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int maxProfit(int arr[],int n){
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1])
        {
            profit += (arr[i]-arr[i-1]);
        }
        
    }
    return profit;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //5,2,7,3,6,1,2,4
    //max => 11
    //drop->local minimum->buy
    //local maxima -> sell

    int arr[] = {5,2,6,1,4,7,3,6};
    cout<<maxProfit(arr,8);

    
    return 0;
}