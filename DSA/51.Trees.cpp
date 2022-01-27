#include <iostream>
#include <queue>
#include <stack>
using namespace std;

///NODE -----------------------------
class Node{
    public:
    Node *left;
    int data;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

//QUEUE -------------------------
class Queue{
    private:
    int size;
    int front; //index pointers
    int rear;
    Node* *Q;

    public:
    Queue(int n){
        front = rear = -1;
        size = n;
        Q = new Node*[size];
    }
    void enqueue(Node* x){
        if(rear == size-1){
            cout<<"Queue full\n";
        }else{
            rear++;
            Q[rear] = x;
        }
    }
    Node* dequeue(){
        Node* x = NULL;
        if(front ==  rear){
            cout<<"Queue is empty\n";
        }else{
            x = Q[front+1];
            front++;
        }
        return x;
    }
    bool isFull(){
        if(rear == size-1) return true;
        else return false;
    }
    bool isEmpty(){
        if(rear == front) return true;
        else return false;
    }
    void display(){
        for(int i = front+1; i <= rear;i++){
            cout<<Q[i]<<" ";
        }
        cout<<"\n";
    }
};

//BINARY TREE
class Tree{
    public:
    Node *root;
    Tree(){
        root = NULL;
    }

    void CreateTree(){
        Node *p,*t;
        int x;

        Queue q(100);

        cout<<"Enter root value \n";
        cin>>x;
        root = new Node(x);

        q.enqueue(root);
        while (!q.isEmpty())
        {
           p = q.dequeue();
           cout<<"Enter value of left child of "<<p->data<<" :\n";
           cin>>x;
           if(x!= -1){
               t = new Node(x);
               p->left = t;
               q.enqueue(t);
           }
           cout<<"Enter value of right child of "<<p->data<<" :\n";
            cin>>x;
            if(x!= -1){
                t = new Node(x);
                p->right = t;
                q.enqueue(t);
            }
        }
        
    }
    // 2n+1 calls if n nodes
    // T = O(n)
    void Preorder(Node *t){
        if(t!=NULL){
            cout<<t->data<<" ";
            Preorder(t->left);
            Preorder(t->right);
        }
    }

    void Postorder(Node *t){
        if(t!=NULL){
            Postorder(t->left);
            Postorder(t->right);
            cout<<t->data<<" ";
        }
    }
    void Inorder(Node *t){
        if(t!=NULL){
            Inorder(t->left);
            cout<<t->data<<" ";
            Inorder(t->right);
        }
    }

    void PreorderIterative(Node *t){
        stack<Node*> s;
        while(t != NULL || !s.empty()){
            if(t!=NULL){
                cout<<t->data<<" ";
                s.push(t);
                t = t->left;
            }else{
                t = s.top();
                s.pop();
                t = t->right;
            }
        }
    }

    void InorderIterative(Node *t){
        stack<Node*> s;
        while (t!=NULL || !s.empty()){
            if(t!=NULL){
                s.push(t);
                t = t->left;
            }else{
                t = s.top();
                s.pop();
                cout<<t->data<<" ";
                t = t->right;
            }
        }
    }
    void Levelorder(Node *t){
        Queue q(100);

        cout<<t->data<<" ";
        q.enqueue(t);

        while(!q.isEmpty()){
            t = q.dequeue();
            if(t->left){
                cout<<t->left->data<<" ";
                q.enqueue(t->left);
            }
            if(t->right){
                cout<<t->right->data<<" ";
                q.enqueue(t->right);
            }
        }
    }
    
    int count(Node* t){
        int x=0,y=0;
        if(t!=NULL){
            x = count(t->left);
            y = count(t->right);
            return x + y + 1;
        }
        return 0;
    }

    int leafNodes(Node* t){
        int x=0,y=0;
        if(t!=NULL){
            x = leafNodes(t->left);
            y = leafNodes(t->right);
            if(t->left == NULL && t->right == NULL){
                return x + y + 1;
            }else{
                return x + y ;
            }
        }
        return 0;
    }

    int deg2(Node* t){
        int x=0,y=0;
        if(t!=NULL){
            x = deg2(t->left);
            y = deg2(t->right);
            if(t->left != NULL && t->right != NULL){
                return x + y + 1;
            }else{
                return x + y ;
            }
        }
        return 0;
    }

    int deg2or1(Node* t){
        int x=0,y=0;
        if(t!=NULL){
            x = deg2or1(t->left);
            y = deg2or1(t->right);
            if(t->left != NULL || t->right != NULL){
                return x + y + 1;
            }else{
                return x + y ;
            }
        }
        return 0;
    }



    int sum(Node* t){
        int x,y;
        if(t!=NULL){
            x = sum(t->left);
            y = sum(t->right);
            return x + y + t->data;
        }
        return 0;
    }

    int height(Node *t){
        int x=0,y=0;
        if(t==0){
            return 0;
        }
        x = height(t->left);
        y = height(t->right);
        if(x>y) return x+1;
        else return y+1;
    }

    int countForBothChildren(Node* t){
        int x,y;
        if(t!=NULL){
            x = countForBothChildren(t->left);
            y = countForBothChildren(t->right);
            if(t->left &&  t->right) 
            return x+y+1;
            else return x+y;
        }
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    Tree t;
    t.CreateTree();
    t.Preorder(t.root);
    cout<<"\n";
    t.Postorder(t.root);
    cout<<"\n";
    t.Inorder(t.root);
    cout<<"\n";
    t.PreorderIterative(t.root);
    cout<<"\n";
    t.InorderIterative(t.root);
    cout<<"\n";
    t.Levelorder(t.root);
    cout<<"\n";
    cout<<t.count(t.root);
    cout<<"\n";
    cout<<t.height(t.root);
    return 0;
}