/*Scrivere un programma che dato un vettore di reali da file, lo ordini
 * dal più piccolo al più grande usando il SelectionSort, il BubbleSort e
 * l'InsertionSort, Calcolando il numero di confronti e assegnazioni.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *selectionSort(float *V, int dim);
int *bubbleSort(float *V, int dim);
int *insertionSort(float *V, int dim);

int main(int argc, char *argv[]) {
    FILE *f;
    float *Vett, *Vett1, *Vett2;
    char *buff;
    long bufflen, i, N = 0L;
    int *DEBUG;

    if(argc == 2){
        f = fopen(argv[1],"r");
        if(f != NULL){
            fseek(f, 0, SEEK_END);
            bufflen = ftell(f)+1;
            fseek(f, 0, SEEK_SET);
            buff = (char *)malloc(bufflen);
            buff = fgets(buff, bufflen+1,f);
            for(i = 0; buff[i] != '\0'; i++){
                if(buff[i] == ' '){
                    N++;
                }
            }
            printf("---------------------\n");
            printf("# = %d\nbuff = %sN = %d\n", bufflen,buff, ++N);
            printf("---------------------\n");
            Vett = (float *)malloc(N*sizeof(float));
            fseek(f, 0, SEEK_SET);
            for(i = 0; i < N; i++){
                fscanf(f,"%f",Vett+i);
            }

            Vett1 = (float *)malloc(N*sizeof(float));
            fseek(f, 0, SEEK_SET);
            for(i = 0; i < N; i++){
                fscanf(f,"%f",Vett1+i);
            }

            Vett2 = (float *)malloc(N*sizeof(float));
            fseek(f, 0, SEEK_SET);
            for(i = 0; i < N; i++){
                fscanf(f,"%f",Vett2+i);
            }

            printf("Stampa vettore di partenza:\n");

            for(i = 0; i < N; i++){
                printf("Vett[%d] = %.2f",i,*(Vett+i));
                printf("\n");
            }
            printf("\n");
            printf("---------------------\n");

            free(DEBUG);
            DEBUG = selectionSort(Vett,(int)N);
            printf("\aStampa vettore ordinato con SelectionSort:\n");
            for(i = 0; i < N; i++){
                printf("Vett[%d] = %.2f",i,*(Vett+i));
                printf("\n");
            }
            printf("#AssegnazioniSelection = %d, #confronti = %d\n", DEBUG[0], DEBUG[1]);
            printf("---------------------\n");

            free(DEBUG);
            DEBUG = bubbleSort(Vett1,(int)N);
            printf("\aStampa vettore ordinato con BubbleSort:\n");
            for(i = 0; i < N; i++){
                printf("Vett1[%d] = %.2f",i,*(Vett1+i));
                printf("\n");
            }
            printf("#AssegnazioniBubble  = %d, #confronti = %d\n", DEBUG[0], DEBUG[1]);
            printf("---------------------\n");

            free(DEBUG);
            DEBUG = insertionSort(Vett2,(int)N);
            printf("\aStampa vettore ordinato con InsertionSort:\n");
            for(i = 0; i < N; i++){
                printf("Vett2[%d] = %.2f",i,*(Vett2+i));
                printf("\n");
            }
            printf("#AssegnazioniInsertion  = %d, #confronti = %d\n", DEBUG[0], DEBUG[1]);
            printf("---------------------\n");



        } else {
            printf("Impossibile aprire il file %s", argv[1]);
        }
    } else {
        printf("Utilizzo: %s <nomefile>", argv[0]);
        return(0);
    }

    return 0;
}

int *selectionSort(float *V, int dim){
    int *Ris, i, j, ind_min;
    float swap, Min;

    Ris = (int *)calloc(2, sizeof(int));



    for(i = 0; i < dim; i++){
        Min = V[i];
        ind_min = i;
        Ris[0]+=3;
        Ris[1]++;
        for(j = i; j < dim; j++){
            Ris[1]+=2;
            Ris[0]++;
            if(Min > V[j]){
                Min = V[j];
                ind_min = j;
                Ris[0]+=2;
            }
        }

        swap = V[i];
        V[i] = Min;
        V[ind_min] = swap;
        Ris[0]+=3;
    }

    return(Ris);
}
int *bubbleSort(float *V, int dim){
    int *Ris, i, j;
    float swap;
    char scambio = 1;

    Ris = (int *)calloc(2, sizeof(int));

    for(i = 0; i < dim-1 && scambio == 1; i++){
        scambio = 0;
        Ris[0]++;
        Ris[1]+=2;
        for(j = 0; j < dim-1-i; j++){
            Ris[1]+=2;
            Ris[0]++;
            if(V[j] > V[j+1]){
                swap = V[j];
                V[j] = V[j+1];
                V[j+1] = swap;
                Ris[0]+=4;
                scambio = 1;
            }
        }
    }

    return(Ris);
}
int *insertionSort(float *V, int dim){
    float curr;
    int i, j, *Ris;

    Ris = (int *)calloc(2, sizeof(int));

    for(i = 0; i < dim; i++){
        Ris[0]+=2;
        curr = V[i];
        Ris[1]++;
        for(j = i; j > 0 && V[j-1] > curr; j--){
            V[j] = V[j-1];
            Ris[1]+=2;
            Ris[0]+=2;
        }
        V[j] = curr;
        Ris[0]++;
    }

    return(Ris);
}