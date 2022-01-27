#include <iostream>
using namespace std;

//CIRCULAR QUEUE----------------------------
//CAN REUSE

//SOLS OF PROBS FACED BY NORMAL QUEUE
//1. RESETTING POINTERS WHEN REACHED LAST
//2. CIRCULAR QUEUE

class Queue{
    private:
    int size;
    int front; //index pointers
    int rear;
    int *Q;

    public:
    Queue(int n){
        front = rear = -1;
        size = n;
        Q = new int[size];
    }

    void enqueue(int x){
        if(front==-1 && rear==-1){
            front == rear == 0;
            Q[rear] = x;
        }else if(((rear+1)%size) == front){
            cout<<"Queue is full\n";
        }else{
            rear = (rear+1)%size;
            Q[rear] = x;
        }
    }

    int dequeue(){
        int x = -1;
        if(front ==  rear){
            cout<<"Queue is empty\n";
        }else{
            x = Q[front+1];
            front++;
        }
        return x;
    }

    void display(){
        for(int i = front+1; i <= rear;i++){
            cout<<Q[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    return 0;
}