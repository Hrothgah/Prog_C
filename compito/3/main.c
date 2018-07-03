#include "item.h"
#include "tree.h"
#include <stdlib.h>
#include <stdio.h>


int main(){
  Item vettore[5] = {3, 15, 2, 8, 56};
  int n = 5;
  treeInit();

  insertNode(vettore, n);

  //printTree();
  puts("\n");
  return 0;
}
