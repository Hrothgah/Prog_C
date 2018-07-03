#include <stdlib.h>
#include <stdio.h>

typedef struct listNode {
  int valore;
  struct listNode * next;
  struct listNode * prev;
} ListNode;

typedef ListNode * ListNodePtr;

ListNodePtr start;

void listInit();
ListNodePtr funzione(int * array, int n, ListNodePtr prev);

int main(){ //Start of main
  int array[10] = {1,2,3,4,5,6,7,8,9,10}; //Initializing array
  int n = 10;
  start = NULL;

 start = funzione(&array,n,start); //calling the function

  ListNodePtr cur = start;
  puts("Prima passata:");
  while (n != 0){
    printf("%d <-> ",cur->valore);
    //printf("Ind. nodo = %p, nodo->valore = %d, nodo->prev = %p, nodo->next = %p\n",cur,cur->valore, cur->prev,cur->next);
    cur = cur->next;
    n--;
  }

  // puts("Seconda passata:");
  // while(n != 10){
  //   printf("<- %d ",cur->valore);
  //   cur = cur->prev;
  //   n++;
  // }

  puts("\n");

  return 0;

} //End of main


ListNodePtr funzione(int * array, int n, ListNodePtr prev){
  ListNodePtr nodo = malloc(sizeof(ListNode));
  nodo->valore = array[0];

  if (n == 0){
    nodo->prev = prev;
    nodo->next = NULL;
    while (n != 11){
      nodo = nodo->prev;
      n++;
    }
    return nodo;
  }

  if (n == 10){
    //start = nodo;
    nodo->prev = NULL;
    nodo->next = funzione(&array[1], (n-1), nodo);
  }
  nodo->prev = prev;
  nodo->next = funzione(&array[1], (n-1), nodo);

}
