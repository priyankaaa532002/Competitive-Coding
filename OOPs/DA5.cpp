#include <stdio.h>
#include <stdlib.h>
struct node
{
	int code,price,stock;
	char name[20],date[10],expdate[10];
	struct node *leftChild;
	struct node *rightChild;
};
struct node *root = NULL;
void insert()
{
	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;
	printf("Enter the unique code : ");
	scanf("%d",&tempNode->code);
	printf("Enter the name : ");
	scanf("%s",tempNode->name);
	printf("Enter the price : ");
	scanf("%d",&tempNode->price);
	printf("Enter the stock : ");
	scanf("%d",&tempNode->stock);
	printf("Enter the date : ");
	scanf("%s",tempNode->date);
	printf("Enter the expiry date : ");
	scanf("%s",tempNode->expdate);
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;
	if(root == NULL)
	{
		root = tempNode;
	}
	else
	{
		current = root;
		parent = NULL;
		while(1)
		{
			parent = current;
			if(tempNode->code < parent->code)
			{
				current = current->leftChild;
				if(current == NULL)	
				{
					parent->leftChild = tempNode;
					return;
				}
			}
			else
			{
				current = current->rightChild;
				if(current == NULL)
				{
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
	printf("Insertion sucessfull\n");
}
void inorder_traversal(struct node* root)
{
	if(root != NULL)
	{
		inorder_traversal(root->leftChild);
		printf("unique code : %d\n",root->code);
		printf("name : %s\n",root->name);
		printf("price : %d\n",root->price);
		printf("stock : %d\n",root->stock);
		printf("date : %s\n",root->date);
		printf("expiry date : %s\n",root->expdate);
		printf("**************************\n");
		inorder_traversal(root->rightChild);
	}
}
void pre_order_traversal(struct node* root)
{
	if(root != NULL)
	{
		printf("unique code : %d\n",root->code);
		printf("name : %s\n",root->name);
		printf("price : %d\n",root->price);
		printf("stock : %d\n",root->stock);
		printf("date : %s\n",root->date);
		printf("expiry date : %s\n",root->expdate);
		printf("**************************\n");
		pre_order_traversal(root->leftChild);
		pre_order_traversal(root->rightChild);
	}
}
void post_order_traversal(struct node* root)
{
	if(root != NULL)
	{
		post_order_traversal(root->leftChild);
		post_order_traversal(root->rightChild);
		printf("unique code : %d\n",root->code);
		printf("name : %s\n",root->name);
		printf("price : %d\n",root->price);
		printf("stock : %d\n",root->stock);
		printf("date : %s\n",root->date);
		printf("expiry date : %s\n",root->expdate);
		printf("**************************\n");
	}
}
struct node* search(int data)
{
	struct node *current = root;
	printf("Visiting elements: ");
	while(current->code != data)
	{
		if(current != NULL)
			printf("%d ",current->code);
		if(current->code > data)
		{
			current = current->leftChild;
		}
		else
		{
			current = current->rightChild;
		}
		if(current == NULL)
		{
			return NULL;
		}
	}
	return current;
}
void displaystock(struct node* root)
{
	if(root != NULL)
	{
		displaystock(root->leftChild);
		if(root->stock != 0)
		{
			printf("unique code : %d\n",root->code);
			printf("name : %s\n",root->name);
			printf("price : %d\n",root->price);
			printf("stock : %d\n",root->stock);
			printf("date : %s\n",root->date);
			printf("expiry date : %s\n",root->expdate);
			printf("**************************\n");
		}
		displaystock(root->rightChild);
	}
}
void displayoutstock(struct node* root)
{
	if(root != NULL)
	{
		displayoutstock(root->leftChild);
		if(root->stock == 0)
		{
			printf("unique code : %d\n",root->code);
			printf("name : %s\n",root->name);
			printf("price : %d\n",root->price);
			printf("stock : %d\n",root->stock);
			printf("date : %s\n",root->date);
			printf("expiry date : %s\n",root->expdate);	
			printf("**************************\n");
		}
		displayoutstock(root->rightChild);
	}
}
int main()
{
	int option,data,option2;
	do
	{
		printf("1. Insert\n");
		printf("2. display\n");
		printf("3. Pre order traversal\n");
		printf("4. Post Order traversal\n");
		printf("5. Search\n");
		printf("6. Display stock and out of stock\n");
		printf("7. exit\n");
		scanf("%d",&option);
		struct node * temp;
		switch(option)
		{
			case 1:
			insert();
			break;
			case 2:
			inorder_traversal(root);
			break;
			case 3:
			pre_order_traversal(root);
			break;
			case 4:
			post_order_traversal(root);
			break;
			case 5:
			printf("Enter the unique code of the item to search : ");
			scanf("%d",&data);
			temp = search(data);
			if(temp != NULL)
			{
				printf("[%d] Element found.", temp->code);
				printf("\n");
			}
			else
			{
				printf("[ %d ] Element not found .\n", data);
			}
			if(temp != NULL)
			{
				printf("Press 1 to update the fields 2 to exit : ");
				scanf("%d",&option2);
				if(option2 == 1)
				{
					printf("Enter the name : ");
					scanf("%s",temp->name);
					printf("Enter the price : ");
					scanf("%d",&temp->price);
					printf("Enter the stock : ");
					scanf("%d",&temp->stock);
					printf("Enter the date : ");
					scanf("%s",temp->date);
					printf("Enter the expiry date : ");
					scanf("%s",temp->expdate);
				}
			}
			break;
			case 6:
			printf("Items in stock are : \n");
			displaystock(root);
			printf("Items out of stock are : \n");
			displayoutstock(root);
			break;
		}
	}while(option!=7);
	return 0;
}
