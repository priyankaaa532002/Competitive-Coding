#include <iostream>
using namespace std;

int main(){
    string borze;
    cin>>borze;
    string temp = "";

    int len = borze.length();
    //.-.--
    //012
    //0
    //--.
    //i=1  20
    for(int i = 0; i< len;i++){
        if(borze[i]=='.'){
            temp = temp + '0';
        }
        else
        {
            i=i+1;
            if(borze[i] == '.'){
                temp = temp + '1';
            }
            else if(borze[i] == '-'){
                temp = temp + '2';
            }
        }

    }
    cout<<temp;
        return 0;
}