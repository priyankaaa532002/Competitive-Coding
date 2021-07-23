#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string final;
    cin>>s;
    int low=0;
    int up=0;
    int len = s.length();
    for(int i = 0; i < len;i++){
        if(islower(s[i]))
        {
            low = low+1;
        }
        else
        {
            up = up+1;
        }
    }
    if(up>low){
        for(int i = 0; i<len; i++){
            final += toupper(s[i]);
        }
    }else{
        for(int i = 0; i<len;i++){
            final += tolower(s[i]);
        }
    }
    // cout<<final;

    // string s;
    // cin>>s;
    // s[0] = toupper(s[0]);
    // cout<<s;

}