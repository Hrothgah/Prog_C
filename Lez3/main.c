/* Scrivere un programma che inseriti dei numeri, ne calcoli
 * la media. */

#include <stdio.h>

int main() {
    int x, ris, media, somma = 0;
    int i = 0;

    printf("Inserisci un numero positivo (-1 per terminare)\n");

    do {
        scanf("%d", &x);
        if ((x < 0) && (x != -1)) {
            printf("Input errato!");
            fflush(stdin);
            continue;
        }

        i++;
        somma += x;
    }
    while (x != -1);

    media = somma / i;

    printf("La media dei numeri inseriti  e': %d", media);


    return 0;
}

/*
#include <stdio.h>

int main(){
    int ris, n, m=0, somma = 0;
    char c = 0;

    do {
        do {
            printf("Inserisci il prossimo numero:");
            ris = scanf("%d", &n);
            if (ris == 0){
                scanf("%c", &c);
                if (c != '$'){
                    printf("Input errato");
                } else {
                    m++;
                    somma += n;
                }
            }
        } while ( (ris == 0) || (c != '$'));
    } while (c != '$');

    printf("La media e': %f", (float)somma / m);

    return 0;

} */