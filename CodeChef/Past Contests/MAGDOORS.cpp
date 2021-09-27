#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; 
    cin>>t;

    while(t>0){
        string str;
        cin>>str;
        int count = 0;
        if(str[0]=='0'){
            count++;
            for (int i = 0; i < str.length() - 1; i++)
            {
                if(str[i] != str[i+1]){
                    count++;
                }
            }
            cout<<count<<"\n";
        }else{
            for (int i = 0; i < str.length() - 1; i++)
            {
                if(str[i] != str[i+1]){
                    count++;
                }
            }
            cout<<count<<"\n";
        }
        t--;
    }
    return 0;
}