/* Scrivere un programma che, inserita una stringa, la trasformi
 * riscrivendola tutta in maiuscolo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Array

void toUpper(char s[]);
char *toUpper2(char s[], char s2[]);
char *toUpper3(char s[]);

int scelta;
char stringa[81];
char st2[81];


int main(){

    printf("Immetti la stringa:\n");
    gets(stringa);

    /* prima funzione che modifica la stringa
    toUpper(stringa);
    printf("%s", stringa); */

    /* seconda funzione che non modifica la stringa */
    toUpper2(stringa, st2);
    printf("st2: %s\n", st2);
    printf("stringa: %s\n", stringa);

    /* terza funzione, come scritta alla lavagna */

    /* warning: assignment makes integer from pointer without a cast [-Wint-conversion]
     st2[81] = toUpper3(stringa);
     function returns address of local variable [-Wreturn-local-addr]
     return (s1); */
    /*
    st2[81] = toUpper3(stringa);
    printf("%s\n", st2);  */

    return 0;
}


void toUpper(char s[]){
    int i = 0;
    for(i = 0; s[i]!= '\0'; i++){
        s[i] -= 32;
    }
}


char *toUpper2(char s[], char s2[]){
    int i;

    for (i = 0; s[i] != '\0'; i++){
        s2[i] = s[i] - 32;
    }

    return (s2);
}

char *toUpper3(char s[]){
    int i;
    char s1[81];

    for(i = 0; s[i] != '\0'; i++){
        s1[i] = s[i] - 32;
    }

    //commento

    return (s1);
}


