#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    //QUEUE
    //FIFO //push pop front empty
    queue<int> q;

    for (int i = 0; i <= 5; i++)
    {
        q.push(i); //O(1)
    }

    while (!q.empty())
    {
        cout<<q.front()<<" "; //o(1)
        q.pop(); //o(1)
    }
}