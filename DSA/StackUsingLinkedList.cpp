#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node* top = NULL;

void push(int data)
{
	node* newnode = new node(data);
	if (top == NULL)
	{
		top = newnode;
	}else{
		newnode->next = top;
		top = newnode;
	}
}

void pop()
{
	node* temp = top;
	top = top->next;
	temp->next = NULL;
	cout<<"\nDeleted data:"<<temp->data<<"\n";
}

void peek()
{
	cout<<top->data<<"\n";
}

void display()
{
	node* temp = top;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	peek();
	display();
	
	return 0;
}