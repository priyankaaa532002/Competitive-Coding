#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

//char *strtok(char *s, char *delimiters)
// returns a token on each susequent call
//on the 1st call funtion should be passed with atring agrument for 's'
//on subsequent calls we should pass the string argument as null


int main(){

    char s[100] = "Today is a rainy day"; //break in spaces --> " "

    char *ptr = strtok(s," ");  //ptr points to the 1st token in the string
    cout<<ptr<<"\n";

    // ptr = strtok(NULL," ");
    // cout<<ptr<<"\n";

    while (ptr != NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<"\n";
    }
    


}