#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int inMin = 0;
    int inMax = 0;
    int min = arr[0];
    int count = 0;

    for(int i = 0; i<n ; i++){
        if(arr[i] <= min){
            min = arr[i];
            inMin = i;
        }
    }

    for(int i = inMin ; i<n-1; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        count++;
    }

    for(int i = 0; i<n ; i++){
        if(arr[i]> max){
            max = arr[i];
            inMax = i;
        }
    }

    for(int i = inMax ; i>0; i--){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        count++;
    }

    cout<<count;
}