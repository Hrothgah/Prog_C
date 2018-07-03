#include "item.h"
#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct treeNode {
  struct treeNode * left;
  Item value;
  struct treeNode * right;
} TreeNode;

typedef TreeNode * TreeNodePtr;

static TreeNodePtr root;

TreeNodePtr treeInsertNode(TreeNodePtr *treeNode, Item * item, int n);
void printTreeNode(TreeNodePtr nodePtr);


void treeInit(){
  root = NULL;
}

int treeIsEmpty(){
  return root == NULL;
}


void insertNode(Item * item, int n){
  treeInsertNode(&root, item, n);
}

TreeNodePtr treeInsertNode(TreeNodePtr *treeNode, Item * item, int n){

  if (n > 0){
      (*treeNode) = malloc(sizeof(TreeNode));
      (*treeNode)->value = *item;
      printf("Il valore e'%d, n vale %d\n",(*treeNode)->value, n);
      (*treeNode)->right = treeInsertNode(&((*treeNode)->right), item+1, n-1);
      (*treeNode)->left = treeInsertNode(&((*treeNode)->left), item+1, n-1);
  } else {
    puts("Fine albero.\n");
    return root;
  }
}

void printTreeNode(TreeNodePtr nodePtr){
  // if (nodePtr != NULL){
  //   printTreeNode(nodePtr->right);
  //   printf("%d",nodePtr->value);
  //   printTreeNode(nodePtr->left);
  // }
  TreeNodePtr cur = root;
  while (cur->right != NULL){
    printf("%d -> ",cur->value);
    cur = cur->right;
  }
}


void printTree(){
  if (!treeIsEmpty()){
      printTreeNode(root);
  }
}
