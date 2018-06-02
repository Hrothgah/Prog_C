#include <stdio.h>

int main() {
    int numero = 0;
    int numero1, numero2,i;
    int eta;
/*
    while(numero < 1000){
        if(numero % 2 != 0){
            numero++;
            continue;
        }
        printf("%d\n", numero += 2);
    } */


    /* do{
        printf("Quanti hanni hai?");
        scanf("%d", &eta);
    }while((eta < 0) || (eta > 100) );

    if(eta >= 18){
        printf("Sei maggiorenne!");
    } else{
        printf("Sei minorenne!");
    } */

    printf("Inserisciil range in cui cercare i dispari (tipo 10-20): ");
    scanf("%d-%d", &numero1, &numero2);

    for(i = numero1; i <= numero2; i++ ){
        if (i%2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}