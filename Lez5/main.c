/* Scrivere un programma che, inserita una stringa di testo,
 * verifichi se essa è palindroma o meno. */

#include <stdio.h>
#include <stdlib.h>
/*
char *leggi(char *stringa);
int main() {
    int lun1, lun2, i;
    char stringa1[80];
    char stringa2[80];

    printf("Inserisci la prima stringa");
    gets (stringa1);
    printf("Inserisci la seconda stringa");
    gets (stringa2);

    for (lun1 = 0; stringa1[lun1] != '\0'; lun1++){

    }

    for (lun2 = 0; stringa2[lun2] != 0; lun2++){

    }

    printf("lun1 vale %d, lun2 vale %d\n", lun1, lun2);

    if (lun1 > lun2){
        printf("La stringa 1 e' piu' grande");
    } else if (lun1 < lun2){
        printf("La stringa 2 e' piu' grande");
    } else if (lun1 == lun2){
        for (i = 0; i < lun1; i++){
            if (stringa1[i] > stringa2[i]){
                printf("La stringa 1 e' piu' grande");
                break;
            } else if (stringa1[i] < stringa2[i]){
                printf("La stringa 2 e' piu' grande");
                break;
            } else {
                printf("Sono uguali!");
                break;
            }
        }
    }


    return 0;
}*/

char stringa[80];

int main(){
    int i, j, a;
    printf("Inserisci una stringa:\n");
    gets(stringa);

    for(i = 0; stringa[i] != '\0'; i++){

    }

    printf("La stringa e' lunga %d caratteri\n", i);
    a = (i-1)/2;

    for(j = 0, i = i-1; j <= i  ; j++, i--){
        if (stringa[i] != stringa[j]){
            printf("La stringa non e' palindroma");
            break;
        } else {
            if (i == j) {
                printf("La stringa e' palindroma");
            }
            continue;
        }

        }





    return 0;
}