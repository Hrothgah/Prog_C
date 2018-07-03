#include <stdlib.h>
#include <stdio.h>

char * funzione(char *a, char b);

int main(){
  FILE *fp;
  char temp = 'a';
  char stringa[50];
  size_t i = 0;

  fp = fopen("stringa.txt","r");

  if (fp != NULL){
    while (!feof(fp)){
      fscanf(fp,"%c",&temp);
      if ((temp >= 'A') && (temp <= 'z')){
          stringa[i] = temp;
          i++;
      }
    }
    stringa[i] = '\0';
  } else {
    puts("Non riesco ad aprire il file.\n");
  }

  printf("La stringa letta da file e':\n");

  puts(stringa);
  i = 0;
  while(stringa[i] != '\0'){
    printf("%c ",stringa[i]);
    i++;
  }
  puts("\n");


  funzione(stringa, 'M');

  printf("Dopo la funzione, la stringa e' diventata:\n");
  puts(stringa);
  puts("\n");

  return 0;
}

char * funzione(char * a, char b){
  size_t i = 0;

  while (a[i] != '\0'){
    if (a[i] > b){
      a[i] = a[i] + 32;
    }
    i++;
  }
}
