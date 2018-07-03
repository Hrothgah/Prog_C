#include "item.h"
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct listNode {
  struct listNode * prev;
  Item value;
  struct listNode * next;
} ListNode;

typedef ListNode * ListNodePtr;
static ListNodePtr start;

ListNodePtr listInsert(Item * array, int n, ListNodePtr previous);

void listInit(){
    start = NULL;
}

int listIsEmpty(){
  return start == NULL;
}

void insert(Item * array, int n){
  listInsert(array,n,NULL);
}

ListNodePtr listInsert(Item * array, int n, ListNodePtr previous){
  ListNodePtr cur = malloc(sizeof(ListNode));
  cur->value = *array;
  if (start == NULL){
    start = cur;
    cur->prev = NULL;
    cur->next = listInsert(array+1, n-1, cur);
  }

  if (n <= 1){
    cur->next = NULL;
    cur->prev = previous;
    return start;
  }

  cur->prev = previous;
  cur->next = listInsert(array+1, n-1, cur);
}

void listNodePrint(ListNodePtr listPtr);

void listPrint(){
  if (!listIsEmpty()){
    listNodePrint(start);
  } else {
    puts("La lista e' vuota.\n");
  }
}

void listNodePrint(ListNodePtr listPtr){
  ListNodePtr cur = listPtr;
  while (cur->next != NULL){
    printf("%d <-> ",cur->value);
    if(cur->next == NULL){
      printf("Non NULL");
      sleep(100000);
    }
    cur = cur->next;
  }
  puts("\n");
}
