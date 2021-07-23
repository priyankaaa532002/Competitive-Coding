#include <bits/stdc++.h>
using namespace std;



int main(){
    string data;
    cin>>data;
    int len = data.length();
    string temp = "";
    for(int i = 0; i<len;i=i+2){
        temp += data[i];
    }
    int len1 = temp.length();
    sort(temp.begin(),temp.end());
    string temp2 = "";

    //1234
    for(int i = 0; i<len1;i++){
        temp2 += temp[i];
        temp2 += "+";
    }

    string temp3 = "";

    for(int i = 0; i < temp2.length()-1 ; i++){
        temp3 += temp2[i];
    }
    cout<<temp3;
}