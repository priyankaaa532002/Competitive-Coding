#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
//*first; (or head)
Node *first = NULL;
void create(int a[], int n)
{
    int i;
    Node *newNode, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        newNode = new Node;
        newNode->data = a[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

Node *second = NULL;
void create2(int a[], int n)
{
    int i;
    Node *newNode, *last;
    second = new Node;
    second->data = a[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        newNode = new Node;
        newNode->data = a[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

void display()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void displayRec(Node *p)
{
    //Node *p = first;
    if (p != NULL)
    {
        cout << p->data << " ";
        displayRec(p->next);
    }
}

int count(Node *p)
{
    //O(n)
    int ll_length = 0;
    while (p != NULL)
    {
        ll_length++;
        p = p->next;
    }
    return ll_length;
}

int countRec(Node *p)
{
    //Node *p = first;
    if (p == 0)
        return 0;
    else
        return countRec(p->next) + 1;
}

int countRec2(Node *p)
{
    int x = 0;
    if (p)
    {
        x = countRec2(p->next);
        return x + 1;
    }
    else
    {
        return x;
    }
}

int sum(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int sumRec(Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return sumRec(p->next) + p->data;
    }
}

int max(Node *p)
{
    int max_ele = INT16_MIN;
    while (p != NULL)
    {
        if (p->data > max_ele)
        {
            max_ele = p->data;
        }
        p = p->next;
    }
    return max_ele;
}

int maxRec(Node *p)
{
    //int max_ele = INT16_MIN;
    int x = 0;
    if (p == NULL)
    {
        return INT16_MIN;
    }
    else
    {
        x = maxRec(p->next);
        if (x > p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
}

//SEARCHING-------------------------------------------
//LINEAR SEARCH
Node *search(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return (p);
        }
        p = p->next;
    }
    return NULL;
}

Node *searchRec(Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return (p);
    }
    return searchRec(p->next, key);
}

//INSERTING A NEW NODE
//1. FIRST ->O(1)
//2. LAST
//3. MIDDLE ->at position O(1)->O(n)

void insertFirst(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = first;
    first = newNode;
}

void insertAtPos(int pos, int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    Node *p = first;
    for (int i = 0; i < pos - 1 && p != NULL; i++)
    {
        p = p->next;
    }
    newNode->next = p->next;
    p->next = newNode;
}

void insertLast(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    if (first == NULL)
    {
        //first=last=newNode;
    }
    else
    {
        //last->next = newNode;
        //last = newNode;
    }
}

void insertInSorted(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    Node *p = first;
    Node *q = NULL;
    if (first == NULL)
    {
        first = newNode;
    }
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            newNode->next = first;
            first = newNode;
        }
        else
        {
            newNode->next = p;
            q->next = newNode;
        }
    }
}

void deleteFirst()
{
    Node *p = first;
    first = first->next;
    int x = p->data;
    cout << x << "\n";
    delete p;
}

void deletePos(int position)
{
    Node *p = first;
    Node *q = NULL;
    for (int i = 0; i < position - 1 && position != 0; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    cout << x << "\n";
    delete p;
}

bool isSorted()
{
    Node *p = first;
    Node *q = NULL;
    //int check = 1;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
        if (q->data > p->data)
        {
            return false;
        }
    }
    return true;
}

void removeDuplicatesFromSorted()
{
    Node *p = first;
    Node *q = first->next;

    while (q != NULL)
    {
        if (p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

//USING AUX ARRAY
void reversingALinkedList(){
    //reversing elements
    //reversing the links

    Node *p = first;
    int i = 0;
    int arr[5];
    while(p!=NULL){
        arr[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;
    while(p!=NULL){
        p->data = arr[i];
        i--;
        p=p->next;
    }
    //TAKES EXTRA SPACE 
    //O(2n)
}

//SLIDING POINTER CONCEPT
void reversingALinkedList2(){
    // 3 pointers
    Node *p = first;
    Node *q = NULL;
    Node *r = NULL;

    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;

        q->next = r;
    }
    first = q;
}

//RECURRSION
void reversingALinkedList3(Node *q, Node *p){
    if (p!=NULL)
    {
        reversingALinkedList3(p,p->next);
        p->next = q;
    }else{
        first = q;
    }
}

//CONCATENATION
void concatenation(){
    Node *p = first;
    Node *q = second;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}


//MERGING
void merge(){ //O(n+m)
    Node *third, *last = NULL;
    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }else{
        third = last = second;
        second = second->next;
        last->next = NULL;
    }
    while (first!=NULL && second!=NULL)
    {
        if (first->data < second->data){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }else{
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if (first!=NULL) {
        last->next = first;
    }else{
        last->next = second;
    }

    //for us
    first = third;
}


bool isLoop(Node *f){
    Node *p, *q;
    p=q=f;

    do{
        p = p->next;
        q = q->next;
        if (q!=NULL)
        {
            q = q->next;
        }else{
            q = NULL;
        }
    }while (p != NULL && q!=NULL && p!=q);
    if (p==q) return true;
    else return false;
}


//FIND MIDDLE NODE
void middle(){
    Node *p,*q = first;
    while (q!=NULL)
    {
        q=q->next;
        if (q!=NULL)
        {
            q=q->next;
        }
        if (q!=NULL)
        {
            p=p->next;
        }
    }
    cout<<p->data<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[] = {1, 2, 4, 7, 9};
    create(a, 5);

    int b[] = {3,5,6,8,10};
    create2(b,5);
    // //display();
    // displayRec(first);
    // cout<<"\n"<<count(first)<<"\n";
    // cout<<sum(first)<<"\n";
    // cout<<sumRec(first)<<"\n";
    // cout<<max(first)<<"\n";
    // cout<<maxRec(first)<<"\n";
    // cout<<search(first,5)<<"\n";
    // cout<<searchRec(first,5)<<"\n";
    // insertFirst(2);
    // insertAtPos(3,8);
    //insertInSorted(3);
    //deleteFirst();
    //deletePos(5);
    //cout << isSorted() << "\n";
    //removeDuplicatesFromSorted();
    //reversingALinkedList2();
    //reversingALinkedList3(NULL,first);
    //concatenation();
    //merge();
    cout<<isLoop(first)<<"\n";
    display();

    return 0;
}