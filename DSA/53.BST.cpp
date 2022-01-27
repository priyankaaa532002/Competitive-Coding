#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root = NULL;

    Node *insert(Node *p, int data)
    {
        if (p == NULL)
        {
            Node *t = new Node(data);
            return t;
        }
        if (data < p->data)
        {
            p->left = insert(p->left, data);
        }
        else if (data > p->data)
        {
            p->right = insert(p->right, data);
        }
        return p;
    }

    void insertIterative(Node *t, int data)
    {
        if (t == NULL)
        {
            root = new Node(data);
            return;
        }
        Node *r = NULL;
        while (t != NULL){
            if (data == t->data){
                cout << "Already exists \n";
                return;
            }
            else if (data < t->data){
                r = t;
                t = t->left;
            }
            else{
                r = t;
                t = t->right;
            }
        }
        if(data < r->data){
            r->left = new Node(data);
        }else{
            r->right = new Node(data);
        }
    }

    void Inorder(Node *t)
    {
        if (t != NULL)
        {
            Inorder(t->left);
            cout << t->data << " ";
            Inorder(t->right);
        }
    }

    Node* search(Node *t,int key){
        while(t!=NULL){
            if(t->data == key){
                return t;
            }else if(key < t->data){
                t = t->left;
            }else{
                t = t->right;
            }
        }
        return NULL;
    }

int heightofBST(Node *p) { 
        int x, y;
        if(p== NULL) return 0;
        x = heightofBST(p->left);
        y = heightofBST(p->right);

        if(x > y) return x+1;
        else return y+1;
    }

    Node* InPredecessor(Node *p) {
        while(p && p->right != NULL) {
            p = p->right;
        }
        return p;
    }

    Node* InSuccessor(Node *p) {
        while(p && p->left != NULL) {
            p = p->left;
        }
        return p;
    }
    // TC-> O(logn)
    Node* deleteinBST(Node *p, int key) {
        Node *q;
        if(p == NULL) return NULL;
        if(p->left == NULL && p->right == NULL) {
            if(p==root) {
                root = NULL;
            }
            delete(p);
            return NULL;
        }
        if(key < p->data) {
            p->left = deleteinBST(p->left, key);
        } else if(key > p->data) {
            p->right = deleteinBST(p->right, key);
        } else {
            if(heightofBST(p->left) > heightofBST(p->right)) {
                q = InPredecessor(p->left);
                p->data = q->data;
                p->left = deleteinBST(p->left, q->data);
            } else {
                q = InSuccessor(p->right);
                p->data = q->data;
                p->right = deleteinBST(p->right, q->data);
            }
        }
        return p;
    }

    //can be created using ONLY PRE OR ONLY POST ORDER
    void createFromPre(int pre[],int n){
        stack<Node*> s;
        Node *t;
        int i = 0;
    }

    //FOT BST -> HEIGHT CAN VARY FROM LOGN TO N
    //WE CAN NOT CONTROL ORDER OF INSERTION
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    BST bst;
    // bst.root = bst.insert(bst.root, 30);
    // bst.insert(bst.root, 40);
    // bst.insert(bst.root, 20);
    bst.insertIterative(bst.root,30);
    bst.insertIterative(bst.root,40);
    bst.insertIterative(bst.root,20);

    bst.Inorder(bst.root);
    if(bst.search(bst.root,20) == NULL){
        cout<<"false";
    }else{
        cout<<"true";
    }
    cout<<bst.search(bst.root,20)<<" ";
    cout<<bst.deleteinBST(bst.root,30)<<" ";
    bst.Inorder(bst.root);
    return 0;
}