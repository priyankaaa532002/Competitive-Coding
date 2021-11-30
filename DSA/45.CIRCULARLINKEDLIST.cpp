#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void Create(int arr[], int n)
{
    Node *nn, *last;
    head = new Node;
    head->data = arr[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        nn = new Node;
        nn->data = arr[i];
        nn->next = head;
        last->next = nn;
        last = nn;
    }
}
void Display(Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

void DisplayRec(Node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        DisplayRec(p->next);
    }
    flag = 0;
}

void insertAtPos(int pos, int x)
{
    Node *p = head;

    if (pos == 0)
    {
        Node *nn = new Node;
        nn->data = x;
        if (head == NULL)
        {
            head = nn;
            nn->next = head;
        }
        else
        {
            while (p->next != head){
                p = p->next;
            }
            p->next = nn;
            nn->next = head;
            head = nn;
        }
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        Node *nn = new Node;
        nn->data = x;
        nn->next = p->next;
        p->next = nn;
    }
}

void Delete(int pos){
    Node *p,*q;
    int x = -1;
    if (pos==1)
    {
        p = head;
        while (p->next!=head){
            p = p->next;
        }
        x = head->data;
        if(p==head){
            delete head;
            head = NULL;
        }else{
            p->next = head->next;
            delete head;
            head = p->next; 
        }
    }else{
        p = head;
        for (int i = 0; i < pos-2; i++)
        {
            p = p->next;
        }
        q = p->next;
        x = q->data;
        p->next = q->next;
        delete q;
    }
    cout<<x<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr1[] = {1, 2, 3, 4, 5, 6};
    Create(arr1, 6);
    insertAtPos(3, 9);
    insertAtPos(0, 100);
    Delete(2);
    Display(head);
    return 0;
}