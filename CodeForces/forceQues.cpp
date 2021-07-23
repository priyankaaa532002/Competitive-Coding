#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i = 0; i< n; i++){
        for(int j= 0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    int sumi = 0;
    int sumj = 0;
    int sumk = 0;

    
        for(int j= 0; j<n; j++){
            sumi = sumi + arr[j][0];
        }

        for(int j= 0; j<n; j++){
                sumj = sumj + arr[j][1];
            }

        for(int j= 0; j<n; j++){
                sumk = sumk + arr[j][2];
            }
    // cout<<"";
    // cout<<sumi<<sumj<<sumk;
    if(sumi== 0 && sumj == 0 && sumk == 0) cout<<"YES";
    else cout<<"NO";
    return 0;
}