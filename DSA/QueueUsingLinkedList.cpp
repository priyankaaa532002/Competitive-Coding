#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node(int d){
		data = d;
		next = NULL;
	}
};

node *front = NULL;
node *rear = NULL;

void enqueue(int data)
{
	node* newnode = new node(data);
	if (front == NULL && rear == NULL)
	{
		front = rear = newnode;
	}else{
		rear->next = newnode;
		rear = newnode;
	}
}

void dequeue(){
	cout<<"\n"<<front->data<<"\n";
	node* temp = front;
	front = front->next;
}

void display()
{
	node* temp = front;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void peek()
{
	cout<<"\n"<<front->data<<"\n";
}

int main()
{
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();
	peek();
	dequeue();
	display();
	return 0;
}