#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int funzione(char * a, char b);
int main(){
  int i;
  int n = 5;
  int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  char *s = "riabilitare";
  char u = 'm';
  int array[5] = {1,2,3,4,5};

  for (i = 1; i < n, array[i]%2==0;i++){
    printf("%d ",array[i]);
  }

  puts("\n");

}

int funzione(char * a, char b){
  int conta = 0;
  while (*a != '\0'){
    if (*a == 'r'){
      //printf("%c",a[i]);
      conta = conta + 1;
    } else if (*a>b){
    conta = conta +2;
    }

    a++;
  }
  return conta;
}
