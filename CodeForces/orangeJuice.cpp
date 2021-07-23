#include <iostream>
using namespace std;

int main(){
    double n;
    double items;
    cin>>n;
    double sum = 0;
    for(int i = 0; i<n ; i++){
        cin>>items;
        sum=sum+items;
    }
    cout<<sum/n;

    return 0;
}