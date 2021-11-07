#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *new_node(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

struct node *insert(struct node *node, int key) {
  if (node == NULL) return new_node(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}


struct node *min_val_node(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

struct node *delete_node(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = delete_node(root->left, key);
  else if (key > root->key)
    root->right = delete_node(root->right, key);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = min_val_node(root->right);
    root->key = temp->key;
    root->right = delete_node(root->right, temp->key);
  }
  return root;
}

int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 2);
  root = insert(root, 1);
  root = insert(root, 5);
  root = insert(root, 7);
  root = insert(root, 9);
  root = insert(root, 14);
  root = insert(root, 3);
//   inorder(root);

  root = delete_node(root, 10);
//   inorder(root);
}