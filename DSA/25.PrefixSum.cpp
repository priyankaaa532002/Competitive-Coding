#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<int> v){
    int n = v.size();
    vector<int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = v[i]+prefix[i-1];
    }
    for (int i : prefix)
    {
        cout<<i<<" ";
    }
    
}

void suffixSum(vector<int> v){
    int n = v.size();
    vector<int> suffix(n);
    suffix[n-1] = v[n-1];
    for (int i = n-2; i >=0 ; i--)
    {
        suffix[i] = v[i] + suffix[i+1];
        //1 2 3 4 5
        //        5
    }

    for (int i : suffix)
    {
        cout<<i<<" ";
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //int arr1[9] = {1,2,3,4,5,6,7,8,9}
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9};
    prefixSum(vec1);
    cout<<"\n";
    suffixSum(vec1);

    return 0;
}