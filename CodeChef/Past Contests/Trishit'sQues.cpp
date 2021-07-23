#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = 1e9+7;

class node{
public:
	string data;
	node *next;

	node(string d){
		data = d;
		next = NULL;
	}
};

node *head = NULL;
node *headEve = NULL;
node *headOdd = NULL;

void insert(string str){
	node *newnode  = new node(str);
	if(head == NULL){
		head = newnode;
	}else{
		node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void display(node* h){
	if(h == NULL){
		cout<<"List is Empty";
	}else{

		node *temp = h;
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<"\n";
	}
}

void seperate(){
	node *temp = head;
	int i=1;

	while(temp != NULL){
		node *newnode = new node(temp->data);
		if(i%2 == 0){
			if(headEve == NULL){
				headEve = newnode;
			}else{
				node *tempEve = headEve;
				while(tempEve->next != NULL){
					tempEve = tempEve->next;
				}
				tempEve->next = newnode;
			}
		}else{
			if(headOdd == NULL){
				headOdd = newnode;
			}else{
				node *tempOdd = headOdd;
				while(tempOdd->next != NULL){
					tempOdd = tempOdd->next;
				}
				tempOdd->next = newnode;
			}
		}
		i++;
		temp = temp->next;
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string st;
		cin>>st;
		insert(st);
	}
	seperate();
	cout<<"Original \n";
	display(head);
	cout<<endl;
	cout<<"List 1: \n";
	display(headOdd);
	cout<<endl;
	cout<<"List 2: \n";
	display(headEve);
    return 0;
}