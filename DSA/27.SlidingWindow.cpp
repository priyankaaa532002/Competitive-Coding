#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

//MAX SUM SUB ARRAY OF SIZE K
//IN: ARR,SIZE,WINDOW SIZE
//ARR-> 2 5 1 8 2 9 1
//WIN SIZE->3
//MAX OF ALL SUB ARRAY
//2 5 1 8 2 9 1
//start->i end->j
//win size = j-i+1
//j-i+1 == k

void maxSumSubArray(int arr[],int n, int k){
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    while (j<n)
    {
        sum=sum+arr[j];
        if (j-i+1 < k)
        {
            j++;
        }else if(j-i+1 == k){
            maxSum = max(maxSum,sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    cout<<maxSum<<"\n";
}

//FIRST NEGATIVE NUMBER IN EVERY WINDOW SIZE K
//12 -1 -7 8 -15 30 16 28
//K=3
//SIZE - K + 1 OUTPUTS

//brute force->
void firstNegativeNum(int arr[],int n, int k){

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    return 0;
}