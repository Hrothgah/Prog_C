#include <stdlib.h>
#include <stdio.h>

int main(){
  FILE * fp;
  char temp;
  size_t i = 0;
  int spazio = 0;

  fp = fopen("file.txt","r");

  if (fp != NULL){
    while (!feof(fp)){
      fscanf(fp,"%c",&temp);
      if (temp == ' '){
        spazio = 1;
      }
      if (spazio == 1){
        i++;
      }

      if (i == 3){
        printf("%c\n",temp);
      }
    }
  }

  return 0;
}
