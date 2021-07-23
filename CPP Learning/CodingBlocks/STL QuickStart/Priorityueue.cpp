#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){

    //priority queue -->push and pop
    //heap implimentation -->default max heap
    //push o(logn)
    //pop o(logn)
    //top o(1)
    //empty

    priority_queue<int> pq;

    //for changing priority --> ie minheap
    priority_queue<int,vector<int>,greater<int>> pq;

    
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
        pq.push(no);
    }

    //remove
    while (!pq.empty())
    {
        cout<< pq.top()<<" ";
        pq.pop();
    }
    
    


}