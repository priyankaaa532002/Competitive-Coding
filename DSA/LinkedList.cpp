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

node* head = NULL;

// 1--> Insertion at beggining
void insertBeg(int data){
	node* newnode = new node(data);
	if (head == NULL)
	{
		head = newnode;
	}else{
		newnode->next = head;
		head = newnode;
	}
}

int deleteBeg(){
	node* temp = head;
	head = head->next;
	temp->next = NULL;
	return temp->data;
}

void insertMid(int pos,int data){
	node* temp = head;
	node* newnode = new node(data);
	int i = 1;
	while(i<pos-1 && temp->next != NULL)
	{
		temp=temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void insertEnd(int data){
	node* newnode = new node(data);
	if (head == NULL)
	{
		head = newnode;
	}else{
	node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
}

int deleteEnd(){
	node* temp = head;
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	int deleted = temp->next->data;
	temp->next = NULL;
	return deleted;
	;
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
	insertBeg(1);
	insertBeg(2);
	insertEnd(4);
	insertMid(3,3);
	//cout<<deleteEnd()<<endl;
	display();
	
	return 0;
}