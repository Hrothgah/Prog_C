#include <stdio.h>
#include <stdlib.h>

void somma(int n1, int n2);
void divisione(int n1, int n2);
void prodotto(int n1, int n2);
void sottrazione(int n1, int n2);

int main() {
    int numero1, numero2;
    char operazione;

    printf("Immetti il primo numero:");
    scanf("%d", &numero1);

    printf("Immetti il secondo numero:");
    scanf("%d", &numero2);

    printf("Che operazione vuoi fare? (+, -, *, /)");
    scanf("%c", &operazione);
    operazione = getchar();

    switch(operazione){
        case '+':
            somma(numero1,numero2);
            break;
        case '-':
            sottrazione(numero1,numero2);
            break;
        case '*':
            prodotto(numero1, numero2);
            break;
        case '/':
            divisione(numero1, numero2);
            break;
        default:
            printf("Non hai inserito un'operazione");
            break;
    }



    printf("\nGrazie per avere scelto la nostra compagnia :)");

    printf("\n");
    
    return 0;
}


void somma(int n1, int n2){

    printf("La somma di %d + %d vale: %d\n", n1, n2, n1+n2);
}

void sottrazione(int n1, int n2){

    printf("La sottrazione di %d - %d vale: %d\n", n1, n2, n1-n2);
}

void prodotto(int n1, int n2){

    printf("Il prodotto tra %d e %d vale: %d\n", n1, n2, n1*n2);
}

void divisione(int n1, int n2){

    printf("La divisione tra %d e %d vale: %d\n", n1, n2, n1/n2);
}

