#include <iostream>
using namespace std;
//stack
//last in, first out
//fixed size array
//top
class Stack{
    private:
    int size;
    int top;
    int *s; //pointer to array

    public:
    Stack(int n) {
		size = n;
		top = -1;
		s = new int[size];
	}

    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow\n";
        }else{
            top++;
            s[top] = x;
        }
    }

    void pop(){
        int x = -1;
        if(top==-1){
           cout<<"stack underflow\n"; 
        }else{
            x = s[top];
            top--;
        }
        cout<<x<<"\n";
    }

    void peek(int pos){
        if(top-pos+1 < 0){
            cout<<"invalid\n";
        }else{
            cout<<s[top-pos+1]<<"\n";
        }
    }

    void stackTop(){
        if(top==-1){
            cout<<-1<<"\n";
        }else{
            cout<<s[top]<<"\n";
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if(top==size-1){
            return true;
        }else{
            return false;
        }
    }

    void Display(){
        for(int i = top; i>=0;i--){
            cout<<s[i]<<" ";
        }
        cout<<"\n";
    }
};
//push , pop = O(1);

//FOR STACK USING LINKED LIST WE 
//PUSH AND PULL FROM THE START/FIRST

class Node{
    public:
    int data;
    Node *next;
};

class Stacky{
    private:
    Node *top = NULL;
    
    public:
    //Stack(){top=NULL;}
    void push(int x){
        Node *nn = new Node;
        if (nn==NULL){
            cout<<"Stack overflow\n";
        }else{
            nn->data = x;
            nn->next = top;
            top = nn;
        }
    }

    void pop(){
        Node *t;
        if(top==NULL){
            cout<<"Stack empty\n";
        }else{
            t = top;
            top=top->next;
            cout<<t->data<<"\n";
            delete(t);
        }
    }

    void display(){
        Node *p =top;
        while (p!=NULL)
        {
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<"\n";
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    // Stack st(5);
    // st.push(6);
    // st.push(7);
    // st.pop();
    // st.push(8);
    // st.push(9);
    // // st.pop();
    // st.stackTop();
    // st.peek(2);
    // st.Display();

    Stacky st;
    st.push(10);
    st.push(20);
    st.pop();
    st.display();
    return 0;
}