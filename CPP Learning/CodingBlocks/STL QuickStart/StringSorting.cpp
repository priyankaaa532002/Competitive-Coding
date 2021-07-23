#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a,string b){
    if (a.length()==b.length())
    {
        return a<b;
    }
    
    return a.length()<b.length();
}

int main(){
    int n;
    cin>>n;
    string s[100]; //array or vector of strings

    cin.get();

    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);// full string 
        //with cin>> hi hello will be considered as 2 strings
    }

    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"\n";

    //SORT 
    sort(s,s+n);

    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"\n";

    //SORT BY LENGTH
    sort(s,s+n,compare);

    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"\n";







    
}