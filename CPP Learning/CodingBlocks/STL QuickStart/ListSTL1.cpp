#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    //for lists insertion --> o(1)

    list<int> l;
    list<int> l1{1,2,3,10,8,5};
    list<string> l2{"apple","mango","guava","banana"};
    l2.push_back("pineapple");

    //sort
    l2.sort();
    
    //reverse
    l2.reverse();

    //pop_front
    cout<<l1.front()<<"\n";
    l1.pop_front();
    cout<<l1.front()<<"\n";

    //add to front
    l2.push_front("kiwi");
    cout<<l2.back()<<"\n";
    l2.pop_back();


    for (auto it = l2.begin(); it !=l2.end(); it++)
    {
        cout<<(*it)<<"->"; 
    }
    cout<<"\n";

    l2.push_back("orange");
    l2.push_back("guava");

    //iterate over list
    for (string s:l2)
    {
        cout<<s<<"-->";
    }
    cout<<"\n";

    //removing elements 
    string f;
    cin>>f;
    l2.remove(f);

    for (string s:l2)
    {
        cout<<s<<"-->";
    }
    cout<<"\n";

    //erase at a perticular index ( 1or more)

    //l2[i] --> doesnt work for lists as it has nodes 
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);

    for (string s:l2)
    {
        cout<<s<<"-->";
    }
    cout<<"\n";

    //insert at position
    it = l2.begin();
    it++;
    l2.insert(it,"new insert");

    for (string s:l2)
    {
        cout<<s<<"-->";
    }
    cout<<"\n";





    
}