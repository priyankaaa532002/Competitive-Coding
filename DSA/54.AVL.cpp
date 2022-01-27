#include <iostream>
using namespace std;

class Node{
    public:
    Node* left;
    int data;
    int height;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

class AVL_Tree{
    public:
    Node *root = NULL;
    int NodeHeight(Node *p){
        int hl,hr;
        if(p!=NULL && p->left!=NULL){
            hl = p->left->height;
        }else{
            hl = 0;
        }

        if(p!=NULL && p->right!=NULL){
            hr = p->right->height;
        }else{
            hr = 0;
        }

        if(hl>hr){
            return hl + 1;
        }else{
            return hr + 1;
        }
    }

    int BalanceFactor(Node *p){
        int hl,hr;
        if(p!=NULL && p->left!=NULL){
            hl = p->left->height;
        }else{
            hl = 0;
        }

        if(p!=NULL && p->right!=NULL){
            hr = p->right->height;
        }else{
            hr = 0;
        }

        return hl - hr;
    }

    Node* LLRotation(Node *p){
        Node *pl = p->left;
        Node *plr = pl->right;

        pl->right = p;
        p->left = plr;
        p->height = NodeHeight(p);
        pl->height = NodeHeight(pl);

        if(root == p){
            root = pl;
        }
        return pl;
    }

    Node *LRRotation(Node *p){
        Node *pl=p->left;
        Node *plr = pl->right;

        pl->right = plr->left;
        p->left = plr->right;

        plr->left = pl;
        plr->right = p;

        pl->height = NodeHeight(pl);
        p->height = NodeHeight(p);
        plr->height = NodeHeight(plr);

        if(root == p){
            root = plr;
        }
        return plr;
    }

    Node *insert(Node *p, int data)
    {
        if (p == NULL)
        {
            Node *t = new Node(data);
            //t->height = 1;
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
        p->height =  NodeHeight(p);

        if(BalanceFactor(p) == 2 && BalanceFactor(p->left)==1){
            //ll rotation
            return LLRotation(p);
        }else if(BalanceFactor(p) == 2 && BalanceFactor(p->left)== -1){
            //lr
            return LRRotation(p);
        }else if(BalanceFactor(p) == -2 && BalanceFactor(p->left)== -1){
            //rr
            //return RRRotation(p);
        }else if(BalanceFactor(p) == -2 && BalanceFactor(p->left)== 1){
            //rl
            //return RLRotation(p);
        }
        return p;
    }
};

    
int main()
{
    
    AVL_Tree tree;
    tree.root = tree.insert(tree.root,10);
    tree.insert(tree.root,5);
    tree.insert(tree.root,2);
    return 0;
}