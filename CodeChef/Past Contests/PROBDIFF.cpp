#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

using namespace std;
int main() {
    
        int t; 
        cin >> t;
        while(t--){
            set<int, greater<int> > s;
            int arr[4]; //1 4 3 2
            for(int i=0;i<4;i++){
                int n ; 
                cin>>n;
                arr[i] = n;
                s.insert(n);
            }//1231 //5577->2 //5757
            int l = s.size();
            if(l==4 || l==3){
               cout << 2 <<'\n';
            }
            else if(l==2){
                sort(arr,arr+4);
                if(arr[0]==arr[1] && arr[2]==arr[3]){
                    cout << 2 <<'\n';
                }
                else {
                    cout << 1 <<'\n';
                    }
            }
            else cout << 0 <<'\n';
        }
    return 0;
}