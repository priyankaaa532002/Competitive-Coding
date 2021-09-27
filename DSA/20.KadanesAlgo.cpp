#include <iostream>
#include <array>
#include <limits.h>
#include <algorithm>
using namespace std;

int maxSumSubArray(int arr[],int n){
    int maxSum = INT_MIN;
    int curSum = 0;
    //
    for (int i = 0; i < n; i++)
    {
        curSum = curSum + arr[i];
        if (curSum>maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}

int negMaxSumSubArray(int arr[],int n){
    int maxSum = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>maxSum){
            maxSum = arr[i];
        }
    }
    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //-5 4 6 -3 4 -1
    //traversing all subarrays
    // int arr[] = {-5 ,4 ,6 ,-3 ,4 ,-1};
    // int maxsum = -99999;
    // int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //     }
    //     cout<<sum<<"\n";
    //     if (sum>maxsum)
    //     {
    //         maxsum = sum;
    //     }  
    // }
    // cout<<maxsum;
    //O(n^2)

    // 1 -> 1
    // 1 2 -> 3
    //kadanes - T=>O(N) S=>O(1)
    int arr[] = {-5,4,6,-3,4,-1};
    cout<<maxSumSubArray(arr,6)<<"\n";

    int arr2[] = {-2000,-4,-6,-3,-4,-1};
    cout<<maxSumSubArray(arr2,6);
    
    return 0;
}