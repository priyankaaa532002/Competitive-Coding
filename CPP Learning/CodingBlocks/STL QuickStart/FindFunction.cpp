#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[]={1,10,11,9,100};

    //size of integer array
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<"\n";
    
    //Search --> find

    int key = 11;
    //TO FIND -->
    auto it = find(arr,arr+n,key);
    cout<<it<<"\n"; //returns address
    int index = it - arr;
    cout<<index<<"\n"; //returns position

    if(index == n){
        cout<<key<<" not present\n";
    }else{
        cout<<key<<" present at index : "<<index<<"\n";
    }



}