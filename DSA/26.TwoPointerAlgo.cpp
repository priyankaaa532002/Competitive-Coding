#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int> v, int x,int i){

    //int i = 0;
    int j = v.size() - 1;
    while (i<j)
    {
        if(v[i]+v[j]>x){
            j--;
        }else if(v[i]+v[j]<x){
            i++;
        }else{
            return true;
        }
    }
    return false;
}
//-3 -1 0 4 6 7
//    i       j


bool findTriplets(vector<int> v){
    int n = v.size();
    sort(v.begin(),v.end());
    for (int i = 0; i < n-2; i++)
    {
        if (twoSum(v, -v[i], i+1))
        {
            return true;
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //when array is sorted->bs or 2 POINTER ALGO
    //triplet zero ques

    //brute force -> O(n^3)

    // sort in nlogn
    
    int arr[] = {2,4,-1,3,-4,0,3};
//               i             j
//increase i -> then decrease j
//while (i < j)
//TC ->                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     O(n)
    return 0;
}