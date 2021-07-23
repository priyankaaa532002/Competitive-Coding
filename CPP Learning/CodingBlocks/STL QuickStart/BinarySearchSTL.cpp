#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);

    //Search in a sorted array
    //binary search 
    //O(logn)
    int key;
    cin>>key;

    bool present = binary_search(arr, arr+n,key);
    if(present){
        cout<<"present\n";
    }else{
        cout<<"not present\n";
    }

    //FOR GETTING INDEX
    auto lb = lower_bound(arr,arr+n,40); // >=key
    cout<<"Lower Bound of 40 is "<<(lb-arr)<<"\n";
    

    auto ub = upper_bound(arr,arr+n,40); // >key
    cout<<"Upper Bound of 40 is "<<(ub-arr)<<"\n";

    //TO GET FREQUENCY
    cout<<(ub-lb)<<"\n";
}