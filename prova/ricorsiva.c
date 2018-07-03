#include <stdlib.h>
#include <stdio.h>
#include <time.h>


typedef struct treeNode {
  struct treeNode * left;
  int Item;
  struct treeNode * right;
} TreeNode;
typedef TreeNode * TreeNodePtr;

TreeNodePtr inalbera(int *a, int N);
void printTree(TreeNodePtr nodePtr);
TreeNodePtr root = NULL;

int main(){
  srand(time(NULL));
  int *array;

  //int N = rand()%16+5;
  int N = 8;
  array = (int *)malloc(N*sizeof(int));

  for (size_t i = 0; i < N; i++){
    array[i] = i+20;
    //printf("A[%d] = %d - ",i, array[i]);
  }
  puts("\n");

  root = inalbera(array, N);


  printTree(root);
  puts("\n");


}

// void makeTree(TreeNodePtr *nodePtr, int *a, int N){
//   int meta;
//   meta = N/2;
//   int * ptr = a[meta+1];
//
//   if (*nodePtr == NULL){
//     *nodePtr = inalbera(a, N);
//     makeTree(*nodePtr->right, ptr, N/2);
//     makeTree(*nodePtr->left, a, N/2);
//   } else {
//
//   }
//
// }

TreeNode * inalbera(int *a, int N){
  TreeNodePtr cur = malloc(sizeof(TreeNode));
  if (N > 3){
    cur->Item = a[N/2];
    N--;
    if (N%2 == 1){
      cur->left = inalbera(a, N/2);
      cur->right = inalbera(&a[(N/2)+2], (N/2-1));
    } else {
      cur->left = inalbera(a, N/2);
      cur->right = inalbera(&a[N/2+1], (N/2-1));
    }

  } else if (N > 0){
     cur->Item = a[1];
     cur->left = malloc(sizeof(TreeNode));
     (cur->left)->Item = a[0];
     (cur->left)->left = NULL;
     (cur->left)->right = NULL;
     if (N >= 2){
       cur->right = malloc(sizeof(TreeNode));
       (cur->right)->Item = a[2];
       (cur->right)->left = NULL;
       (cur->right)->right = NULL;
     } else {
       cur->right = NULL;
     }
   } else if (N == 0){
     cur->Item = a[0];
     cur->left = NULL;
     cur->right = NULL;
   }


   return cur;
  }


  //
  // while (N > 1){
  //   if (root == NULL){
  //     cur = root;
  //   }
  //   cur->Item = a[meta];
  //   TreeNodePtr prev = cur;
  //   printf("%d\n",cur->Item);
  //   cur->left = malloc(sizeof(TreeNode));
  //   cur = cur->left;
  //   inalbera(a, N/2);
  //   cur = prev;
  //   cur->right = malloc(sizeof(TreeNode));;
  //   cur = cur->right;
  //   inalbera(a+meta,(N-meta));
  // }
  // if (N == 1) {
  //   cur->Item = a[0];
  //   return;
  // }
  //
  // puts("\n");



void printTree(TreeNode * nodePtr){
  if (nodePtr != NULL){
    printTree(nodePtr->left);
    printf("%d -> ", nodePtr->Item);
    printTree(nodePtr->right);
  }
}
