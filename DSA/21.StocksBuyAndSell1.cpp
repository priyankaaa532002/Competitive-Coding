#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int maximumProfit(int arr[],int n){
    int maxProfit = 0;
    int minSoFar = arr[0];
    for (int i = 0; i < n; i++)
    {
        minSoFar = min(minSoFar,arr[i]);
        int Profit = arr[i] - minSoFar;
        maxProfit = max(maxProfit,Profit);
    }
    return maxProfit;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //3 1 4 8 7 2 5
    //min max(buy 1st then sell)
    //using 2 loops -> O(n^2)
    
    //aur[] = [8,8,8,8,7,5,5]
    //maxprof = 5->7
    //T=>O(n) S=>O(N)

    //minsofar-> 3->1->1->1
    //maxprofit->0->0->3->7
    int arr[] = {3, 1, 4, 8, 7, 2, 5};
    int arr2[] = {5,2,6,1,4};
    cout<<maximumProfit(arr,7)<<"\n";
    cout<<maximumProfit(arr2,5)<<"\n";


    return 0;
}