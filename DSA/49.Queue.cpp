#include <iostream>
using namespace std;

// QUEUE --> FIFO
// REAR = -1
// INSERT -> 1(CONSTANT TIME)
// DELETING -> SHIFTING ON LEFT HAND SIDE -> O(n)

//TWO POINTERS
// F,R = -1 (INITIALLY -> EMPTY QUEUE)
// INSERT -> R++ O(1)
// DELETE -> F++[DELETE] O(1)

//WHEN F==R ->EMPTY (FRONT POINTING BEFORE 1ST ELE)

//REAR = SIZE-1 ->FULL

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
        if(rear == size-1){
            cout<<"Queue full\n";
        }else{
            rear++;
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

    //QUEUE---------------------------
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.display();

    
    return 0;
}