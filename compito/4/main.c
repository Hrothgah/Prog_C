#include <stdlib.h>
#include <stdio.h>
#include "item.h"
#include "list.h"

int main(){
  Item *array;
  int n;

  printf("Digita la dimensione della lista:\n");
  scanf("%d",&n);

  array = (Item *)malloc(n*sizeof(Item));

  printf("Digita %d numeri, e dopo ogni numero premi invio:",n);

  for (size_t i = 0; i < n; i++){
    scanf("%d",&array[i]);
  }

  listInit();
  insert(array, n);

  puts("\nLa lista e':\n");
  listPrint();

  puts("\n");

  return 0;
}
