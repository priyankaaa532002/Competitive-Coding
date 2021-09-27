#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//5 1 4 1 1
//brute force -> T=>O(n^2) S=>O(1)
//find frequency of each number

//sort n(logn)
//1 1 1 4 5
//max count of each ele
//T=> O(n + n(logn)) S=>O(1)
//T=> NLOGN

//if asked to use space(and reduce time) -> dp or hash map
//store freq
//use map
//T=> O(n) S=>O(n)

//FOR O(N) AND CONSTANT SPACE S(1)
//5 1 4 5 5
//5->1 - 1 = 0
//1->1 - 1 = 0
//4->1 - 1 = 0
//5->2
//5-->3 times
//--------------------------------
// 1 1 1 2 3
//1-> 3-1-1 = 1
//traverse and check count in the end
//last element is majority element

//1 1 2 3 1
//

int majorityElement(int arr[],int n){
    int ansIndex = 0;
    int count = 1;
    for (int i = 1; i < n; i++){
        if(arr[i] == arr[ansIndex]){
            count++;
        }else{
            count--;
        }
        if (count==0)
        {
            ansIndex = i;
            count = 1;
        }
    } 
    //check if asns index is actually ans
    int ans_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[ansIndex])
        {
            ans_count++;
        }
    }
    if(ans_count>(n/2)){
        return arr[ansIndex];
    }else
    {
        return -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int arr[] = {1,1,2,3,2};
    cout<<majorityElement(arr,5);


    return 0;
}