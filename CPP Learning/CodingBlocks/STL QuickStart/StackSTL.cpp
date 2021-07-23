#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    //LIFO -->STACK
    //push pop top empty 
    //array vector ll dynamic arr

    stack<int> s;

    for (int i = 0; i <= 5; i++)
    {
        s.push(i); //O(1)
    }

    while (!s.empty())
    {
        cout<<s.top()<<" "; //o(1)
        s.pop(); //o(1)
    }
    
}