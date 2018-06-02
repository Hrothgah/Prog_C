/* dato un vettore di reali, ordinarlo dal numero più piccolo al più grande
 * utilizzando l'algoritmo dei minimi ricorsivi */

#include <stdio.h>
#include <malloc.h>

int TrovaIndiceMin(float *V, int dim, int start);
int main() {
    float *V, *PV, valMin;
    int dim, start, i, indMin;

    printf("Inserisci la dimensione del vettore: \n");
    scanf("%d",&dim);

    V = (float *)malloc(dim*sizeof(float));

    for(PV = V; PV - V < dim; PV++){
        printf("Inserisci V[%d]\n",PV-V);
        scanf("%f",PV);
    }

    for(PV = V; PV - V < dim; PV++){
        printf("Inserisci V[%d]=%.2f\n",PV-V,*PV);
    }

    for(i = 0; i < dim; i++){
        indMin = TrovaIndiceMin(V,dim,i);
        printf("Indmin=%d\n", indMin);
        valMin = V[indMin];
        V[indMin] = V[i];
        V[i] = valMin;
        for(PV = V; PV-V<dim; PV++){
            printf("Passo%d V[%d]=%.2f1n",i,PV-V,*PV );
        }
    }

}

int TrovaIndiceMin(float *V, int dim, int start){
    int i, ind = start;
    float Min = V[start];

    for(i = start+1; i<dim; i++){
        if (Min>*(V+i)){
            Min = *(V+i);
            ind = i;
        }
    }

    return(ind);
}