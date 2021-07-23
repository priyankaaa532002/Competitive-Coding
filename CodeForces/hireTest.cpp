#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int can = 0;
        int probs = 0;
        cin>>can>>probs;
        string data;
        int F,P;
        cin>>F>>P;
        for(int i = 0; i < can; i++){
            cin>>data;
            int f = 0;
            int p = 0;
            int u = 0;
            for(int j = 0; j < probs ; j++){
                if(data[j] == 'F')
                f+=1;
                else if(data[j] == 'P')
                p+=1;
                else{
                    u+=1;
                }
            }

            if((f >= F) || (f>=F-1 && p>=P)){
                cout<<1;
            }
            else{
                cout<<0;
            }
            cout<<"\n";
        }
        t--;
    }
    return 0;
}