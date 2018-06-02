#include <stdio.h>
#include <malloc.h>

/* scrivere una funzione float *Mergefloat che dati due vettori V1, V2, di reali ordinati in senso crescente
 * di lunghezze differenti da un terzo vettore ordinato, utilizzando i due vettori dati */

float *Merge(float *v1, int dim1, float *v2, int dim2);

int main() {

    int dim1, dim2;
    float *v1, *v2, *vMerge, *pv;

    printf("Inserisci la dimensione del primo vettore");
    scanf("%d", &dim1);
    v1 = (float *)malloc(dim1*sizeof(float));

    printf("Inserisci v1[0]=");
    scanf("%f", v1);
    for(pv = v1+1; pv - v1 < dim1; pv++){
        do {
            printf("Inserisci v1[%d]=", pv-v1);
            scanf("%f", pv);
            if(*(pv-1)>*pv){
                printf("Il valore deve essere maggiore di %f\n",*(pv-1) );
            }
        } while(*(pv-1)>*pv);
    }

    printf("Inserisci la dimensione del seccondo vettore");
    scanf("%d", &dim2);
    v2 = (float *)malloc(dim2*sizeof(float));

    printf("Inserisci v2[0]=");
    scanf("%f", v2);
    for(pv = v2+1; pv - v2 < dim2; pv++){
        do {
            printf("Inserisci v2[%d]=", pv-v2);
            scanf("%f", pv);
            if(*(pv-1)>*pv){
                printf("Il valore deve essere maggiore di %f\n",*(pv-1) );
            }
        } while(*(pv-1)>*pv);
    }

    vMerge = Merge(v1,dim1,v2,dim2);
    for(pv = vMerge; pv-vMerge < (dim1+dim2); pv++){
        printf("VM[%d]=%.3f\n", pv-vMerge, *pv);
    }
}

float *Merge(float *v1, int dim1, float *v2, int dim2){
    float *VM, *pv1, *pv2, *pvm;

    VM = (float *)malloc((dim1+dim2)*sizeof(float));

    for(pv1 = v1, pv2 = v2, pvm = VM; (pv1-v1) < dim1 && (pv2-v2) < dim2; pvm++){
        if(*pv1 < *pv2){
            *pvm = *pv1++;
        } else {
            *pvm = *pv2++;
        }
    }

    if( (pv1-v1 == dim1) && (pv2-v2 == dim2)){
        return(VM);
    }

    if(pv1-v1 == dim1){
        for(;pv2-v2 < dim2;pvm++){
            *pvm = *pv2++;
        }
    } else {
        for(; pv1-v1 < dim1; pvm++){
            *pvm = *pv1++;
        }
    }

    return(VM);
}