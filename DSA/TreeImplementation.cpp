#include<iostream>
using namespace std;

class node
{
 node *left;
 node *right;
 int data;
 public:
 node *root=NULL;   

node* insert(node *root,int info)
{               //NULL, 30
  if(root==NULL) 
  {
      root = new node;
      root->data=info;
      root->left=NULL;
      root->right=NULL;
  }
  else if(info<root->data)  
          root->left=insert(root->left,info);
      else 
          root->right=insert(root->right,info);
  return root;
}

void inorder(node *root)
{                   
    if(root!=NULL)   
    {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
    return;
}

void preorder(node *root)
{
    if(root!=NULL) 
    {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
    return;
}

void postorder(node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
}

node* inordersucc(node *isucc)
{                     //10000
  if(isucc==NULL)          
    return NULL;
  while(isucc->left!=NULL)  //NULL!=NULL
    isucc=isucc->left;
  return isucc;
}
node* del(node *root,int info)
{           //5000,5
  node *temp;
  if(root==NULL) // false
    cout<<"element not present";
  else if(info<root->data)  //5<5 false
   root->left=del(root->left,info);
  else if(info>root->data) //5>5 X
    root->right=del(root->right,info);
  else //5==5
  {
      if(root->left!=NULL&&root->right!=NULL)
      {
           temp=inordersucc(root->right);
           root->data=temp->data;
           root->right=del(root->right,root->data);
      }
    else
    {
        temp=root;
        if(root->left!=NULL) //false
         root=root->left;
        else if(root->right!=NULL) //false
          root=root->right;
        else
          root=NULL;
        delete(temp);
    } //else
  } //else
  return root;

 

    }
};

int main()
{
int choice,info,count=0;

node obj;

cout<<"enter the data to be inserted\n";
cin>>info;     //4

obj.root=obj.insert(obj.root,info); 
do                   //NULL,4
{
  cout<<"do u want to continue\n1-insert 2-delete\n";
  cout<<"3-preorder 4-inorder 5-postorder 6-exit\n";
  cin>>choice;
  switch(choice)
  {
    case 1: cout<<"enter the data to be inserted\n";
            cin>>info; //3
            obj.root=obj.insert(obj.root,info);
               break;      //1000,3
    case 2: cout<<"enter the value to be deleted\n";
            cin>>info; //4
            obj.root=obj.del(obj.root,info);
            break;   // 1000,4
    case 3: obj.preorder(obj.root);
            break;
    case 4: obj.inorder(obj.root);
            break;
    case 5: obj.postorder(obj.root);
            break;
    case 6: exit(0);
    }
    }while(choice!=6);
}