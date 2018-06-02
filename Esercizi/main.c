#include <stdio.h>
#include <stdlib.h>

void stampapari(int *v, int dim);

int main(){
    int array[]={4,5,6,7,8,9,10,11};
    int v[]={4,5,6,7,8,9,10,11};
    int dim;

    dim = sizeof(v) / sizeof(v[0]);


    stampapari(v,dim);

    return 0;
}

void stampapari(int *v, int dim){
    int i, pari = 0;


    for(i=0;i<dim;i++){
        if(v[i]%2 == 0){
            pari++;
        }
    }

    for(i=0; i<dim; i++){
        if(v[i]%2 == 0) {
            pari--;
            printf("%d", v[i]);

            if (pari != 0) {
                printf("*");
            }
        }
    }
}