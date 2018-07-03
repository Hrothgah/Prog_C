#include <stdio.h>
#include <stdlib.h>

int funzione(int *r, int *s);

int main(){
int a= 2;
int b = 3;
int c[5] = {1,2,3,4,5};
int d[10] = {1,2,3,4,5,6,7,8,9,10};
int i = 0;

// c = funzione(&a, &b)-(a+b);
// printf("a=%d, c=%d", a, c);
// }
//
// int funzione(int *r, int *s){
// if (*r<*s) {
// *r = 5*(*s);
// }

while (d[i] != NULL){
  printf("%d\n",d[i]);
  i++;
}

return 0;
}
