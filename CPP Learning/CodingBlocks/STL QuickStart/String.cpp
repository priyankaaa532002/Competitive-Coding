#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    //String init
    string s0;
    string s1("Hello");

    string s2 = "Hello World";
    
    //COPY
    string s3(s2);
    string s4 = s3;

    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<"\n";
    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<s3<<"\n";
    cout<<s4<<"\n";
    cout<<s5<<"\n";

    //EMPTY OR NOT
    if(s0.empty()){
        cout<<"empty\n";
    }else{
        cout<<"not empty\n";
    }

    //APPEND
    s0.append("I love c++");
    cout<<s0<<"\n";

    s0 += " and java";
    cout<<s0<<"\n";

    //REMOVE
    cout<<s0.length()<<"\n";
    s0.clear();
    cout<<s0.length()<<"\n";

    //COMPARE 2 STRINGS
    s0 = "Apple";
    s1 = "Mango";
    cout<<s0.compare(s1)<<"\n"; //Returns integer == 0 if equal
    // or > 0 or < 0 (if < ie s0 is smaller than s1)

    //OVERLOADED OPERATOR
    if(s1 > s0){
        cout<<"Mango greater than apple\n";
    }

    //ACCESSING CHAR
    cout<<s1[0]<<"\n";

    //FIND SUBSTRING
    string s = "I want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<"\n";

    //Remove a word from the string
    string word = "apple";
    int len = word.length();
    cout<<s<<"\n";
    s.erase(idx,len+1);
    cout<<s<<"\n";

    //Iterate over all chars in the string
    for (int i = 0; i < s1.length(); i++)
    {
        cout<<s1[i]<<":";
    }
    cout<<"\n";

    //using iterators-->
    for (auto it = s1.begin(); it!= s1.end(); it++)
    {
        cout<<*it<<":";
    }

    cout<<"\n";

    //for each loop
    //c++11
    for (auto c:s1)//can use char instead of auto
    {
        cout<<c<<":";
    }
    cout<<"\n";

    
    return 0;
}