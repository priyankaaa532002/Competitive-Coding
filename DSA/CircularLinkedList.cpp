#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

//node* head = NULL;
node* tail = NULL;

void insertEnd(int data)
{
	node* newnode = new node(data);
	node* temp;

	if (tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;
	}
	else{
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}

void insertBeg(int data)
{
	node* newnode = new node(data);
	node* temp;

	if(tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;
	}
	else
	{
		newnode->next = tail->next;
		tail->next = newnode;
		//tail = newnode;
	}

}


void insertMid(int data, int pos)
{
	node* temp;
	int i = 1;
	if (pos == 1)
	{
		insertBeg(data);
	}
	else
	{
		node* newnode = new node(data);
		temp = tail->next;
		while(i < pos - 1)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}



void display()
{
	node *temp;
	if (tail == NULL)
	{
		cout<<"empty";
	}
	else
	{
		temp=tail->next;

		while(temp->next!=tail->next)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data;
	}
}

void deleteBeg()
{
	node *temp;
	temp = tail->next;
	tail->next = tail->next->next;
	cout<<"Deleted element: "<<temp->data<<endl;
	temp->next = NULL;
}

void deleteEnd()
{
	node *temp;
	temp = tail->next;
	while(temp->next->next != tail->next)
	{
		temp = temp->next;
	}
	cout<<"Deleted element: "<<tail->data<<endl;

	temp->next = tail->next;
	tail = temp;
}

int main()
{
	insertBeg(1);
	insertEnd(2);
	insertEnd(4);
	insertEnd(5);
	insertMid(3,3);
	deleteBeg();
	deleteEnd();
	display();
	return 0;
}