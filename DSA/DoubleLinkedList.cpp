#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node *prev;
	node(int d){
		data = d;
		next = NULL;
	}
};
node *head = NULL, *tail = NULL;

void insertEnd(int data)
{
	node* newnode = new node(data);

	newnode->next = 0;
	newnode->prev = 0;

	if (head == NULL)
	{
		head = tail = newnode;
	}else{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
}



void insertBeg(int data)
{
	node* newnode = new node(data);

	newnode->next = 0;
	newnode->prev = 0;

	if (head == NULL)
	{
		head = tail = newnode;
	}
	else{
	head->prev = newnode;
	newnode->next = head;
	head = newnode;
	}
}


void insertMid(int data,int pos)
{
	node* newnode = new node(data);

	newnode->next = 0;
	newnode->prev = 0;

	int i= 1;
	if(pos == 1)
	{
		insertBeg(data);
	}
	else
	{
		node *temp = head;
		while(i<pos-1)
		{
			temp = temp->next;
			i++;
		}

	newnode->prev = temp;
	newnode->next = temp->next;

	temp->next = newnode;
	newnode->next->prev= newnode;
	}

}

void deleteBeg()
{
	node *temp;
	if(head == NULL)
	{
		cout<<"empty";
	}
	else
	{
		temp = head;
		head = head->next;
		head->prev = NULL;
		cout<<temp->data<<endl;
		delete temp;
	}
}

void deleteEnd()
{
	node *temp;
	if(tail == NULL)
	{
		cout<<"empty";
	}
	else{
		temp = tail;
		tail->prev->next = NULL;
		tail = tail->prev;
		cout<<temp->data<<endl;
		delete temp;
	}
}

void deleteMid(int pos)
{
	int i = 1 ; 
	node *temp = head;

	if(pos == 1){
		deleteBeg();
	}
	else{
		while(i<pos)
		{
			temp = temp->next;
			i++;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		cout<<temp->data<<endl;

		delete temp;
	}

}

//Display
void display(){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	insertEnd(1);
	insertEnd(2);
	insertEnd(4);
	insertBeg(0);
	insertMid(3,4);
	deleteBeg();
	deleteMid(2);
	deleteEnd();
	display();
	
	return 0;
}