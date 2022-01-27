#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int Hash(int key){
    return key%10;
}

void Insert(Node *H[],int key){
    int index = Hash(key);
	Node* t = new Node;
	t->data = key;
	t->next = NULL;
	// Case: No nodes in the linked list
	if (H[index] == NULL){
		H[index] = t;
	} else {
        if (t->data < H[index]->data){
			t->next = H[index];
			H[index] = t;
            return;
		}
		Node* p = H[index];
		Node *q = H[index];
		// Traverse to find insert position
		while (p && p->data < key){
			q=p;
			p = p->next;
		}
		// Case: insert position is first
		
		t->next = q->next;
		q->next = t;
		
	}
}

void display(Node *HT[], int n) {
    for(int i=0; i<n; i++) {
        Node *t = HT[i];
        cout<<i<<" --> ";
        while(t) {
            cout<<t->data<<" ";
            t = t->next;
        }
        cout<<endl;
    }
}

bool search(Node *HT[], int key){
    int index = Hash(key);
    Node *temp = HT[index];
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    Node *HT[10];

    //For search------------------->
    
    int i ;
    for(i = 0 ; i < 10 ; i++){
        HT[i] = NULL;
    }
    Insert(HT,5);
    Insert(HT,55);
    Insert(HT,35);
    Insert(HT,15);
    Insert(HT,25);

    display(HT,10);
    cout<<search(HT,55);
    return 0;
}