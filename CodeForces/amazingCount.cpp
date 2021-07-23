#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];

    for(int i = 0; i<num ; i++){
        cin>>arr[i];
    }
    int count = 0;
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i<num;i++){
        if(arr[i] > max){
            max = arr[i];
            count ++;
        }

        if(arr[i] < min){
            min = arr[i];
            count ++;
        }
    }
    cout<<count;
}