#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};

Node *first = NULL;

void create(int a[],int n){
    Node *nn,*last;
    first = new Node;
    first->data = a[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        nn = new Node;
        nn->data = a[i];
        nn->prev = last;
        nn->next = NULL;
        last->next = nn;
        last = nn;
    }
}

void insertion(int pos , int x){
    if(first==NULL){
        Node *nn = new Node;
        nn->data= x;
        first = nn;
        nn->next = NULL;
        nn->prev = NULL;
    }else{
        if(pos==0){
        Node *nn = new Node;
        nn->data= x;
        nn->prev = NULL;
        nn->next = first;
        first->prev = nn;
        first = nn;
    }else{
        Node *p = first;
        Node *nn = new Node;
        nn->data= x;

        for(int i = 0; i < pos-1; i++){
            p=p->next;
        }
        nn->next = p->next;
        p->next = nn;
        nn->prev = p;
        if(nn->next != NULL) nn->next->prev = nn;
    }
    }
}
void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

void length(Node *p){
    int len = 0;
    while(p!=0){
        len++;
        p=p->next;
    }
    cout<<len<<"\n";
}

void Delete(int pos){
    if (pos==1)
    {
        Node *p = first;
        first = first->next;
        delete p;
        if(first!=NULL) first->prev = NULL;
    }else{
        Node *p = first;
        for (int i = 0; i < pos-1; i++)
        {
            p= p->next;
        }
        p->prev->next = p->next;
        if (p->next!=NULL)
        {
            p->next->prev = p->prev;
            delete p;
        }
    }
}

void Reverse(){
    Node *p= first;
    while (p!=NULL)
    {
        Node *temp;
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        if (p!=NULL && p->prev == NULL)
        {
            first = p;
        }
        p = p->prev;
    }   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int A[] = {10,20,30,40,50};
    create(A,5);
    insertion(5,100);
    Delete(6);
    Reverse();
    display(first);
    // length(first);
    return 0;
}