#include <stdlib.h>
#include <stdio.h>

char ** funzione(char * array, char a);

int main(){
  char *testo = "viva la mamma e il papa";
  char ** prova;
  char a = 'a';
  int pippo = 0;
  int pluto = 0;

  prova = funzione(testo, a);

  // while(prova[pippo][pluto] != '\0'){
  //   printf("%c",prova[pippo][pluto]);
  //   pluto++;
  // }

  for (pippo = 0; pippo < 6; pippo++){
    for (pluto = 0; prova[pippo][pluto] != '\0'; pluto++){
      printf("%c",prova[pippo][pluto]);
    }
    puts("\n");
  }

  return 0;
}

char ** funzione(char * array, char a){
  int count = 0;
  char ** res;;
  int vettore = 0;
  int maxvettore = 0;
  int i = 0;
  int j = 0;
  int k = 0;

  printf("Inizio il primo while nella funzione:\n");
  while (array[i] != '\0'){
    if (array[i] == a){
      maxvettore++;
    }
    printf("%c",array[i]);
    i++;
  }

  printf("\n");

  res = (char *)malloc(maxvettore*sizeof(char *));
  i = 0;

  printf("Inizio a copiare le sottostringhe:\n");
  while (array[i] != '\0'){
    count++;
    if (array[i] == a){
      res[vettore] = (char *)malloc((count+1)*sizeof(char));
      for (k = 0; j <= i; j++){
        res[vettore][k] = array[j];
        printf("%c",res[vettore][k]);
        k++;
      }
      //j++;
      res[vettore][k] = '\0';
      printf("\n");
      printf("Fine substring\n");
      vettore++;
      k = 0; count = 0;
    }
    i++;
  }

  printf("Fine funzione, ritorno l'array\n");
  return res;
}
