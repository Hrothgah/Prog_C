/* Scrivere un programma che inserita la misura di un lato di un quadrato
 * ne calcoli l'ipotenusa.*/

#include <stdio.h>
/*
int main(){
    int ris, n, m=0, somma = 0;
    char c = 'a';

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
    } while (c != '$');

    if (m == 0){
        printf("Nessun numero inserito \n");
    } else {
        printf("La media e': %f", (float)somma / m);
    }


    return 0;

} */

//Scrivere un programma che prenda in input un numero anche negativo, lo spezzetti
// nelle sue singole cifre e le visualizzi ognuma separaa dall'altra
// da tre spazi
/*
int main(){
    int numero, i, quoto;
    int *cifre;

    printf("Inserisci un numero:\n");
    scanf("%d", numero);

    for (i = 0; numero > 9; i++){
        cifre[i] = numero % 10;
        numero /= 10;
    }

    for (i = )
} */

/*
#include <math.h>
int main(){
    int cifra, j, i, ris, n, m, p1, p2;
    do {
        printf("Inserisci il numero:");
        ris = scanf("%d", &n);
        if (ris == 0){
            printf("Input errato");
            fflush(stdin);
        }
    } while (ris == 0);

    printf("N = %d \n", n);

    m = n;

    if(m < 0){
        m = -m;
    }

    i = -1;

    do {
        i++;
        p1 = (int)pow(10, 1);
        p2 = (int)pow(10, i+1);
    } while ((m < p1) || (m > p2));

    printf("Potenza di 10 = %d\n", i);

    for (j = i; j >= 0; j--){
        cifra = m / (int)pow(10, j);
        if((n < 0) && (j == i)){
            printf("-");
        }

        printf("%d    ", cifra);
        m = m - cifra*(int)pow(10, j);
    }

    return 0;
} */

#include <math.h>

int main(){
    int ris, i, j, n, sommaQlati, ipot;
    int vero = 1;

    printf("Inserisci un numero: \n");


    do {
        ris = scanf("%d", &n);
        if (ris == 0){
            fflush(stdin);
        }
    } while (ris == 0);

    //while (vero) {
        for (i = 1; i <= n; i++) {
            if (!vero)
                break;

            for (j = 1; j <= n; j++) {
                if (!vero)
                    break;
                sommaQlati = (i * i) + (j * j);
                ipot = (int) sqrt((float) sommaQlati);
                //printf("Ipotenusa = %d\n", ipot);
                if ((ipot * ipot) == sommaQlati) {
                    printf("%d^2 + %d^2 = %d^2\n", i, j, ipot);
                    //vero = 0;
                }
            }
        }
    //}

    return 0;
}
