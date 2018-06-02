#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float **Minori(float **M, int dim, int i, int j);
float DetMat2(float **M);

int main() {

    FILE *f;
    int dimMatr,i,j, ii, jj;
    float **Matr, **Minore, detMin, Det;

    f = fopen("matrice.txt", "r");

    if(f != NULL){
        fscanf(f, "%d", &dimMatr);
        printf("La matrice selezionata ha dimensione: %d\n", dimMatr);

        Matr = (float **) malloc(dimMatr*sizeof(float *));

        for(i = 0; i < dimMatr; i++){
            *(Matr+i)=(float *) malloc(dimMatr*sizeof(float *));
        }

        for(i = 0; i < dimMatr; i++){
            for(j = 0; j < dimMatr; j++){
                fscanf(f,"%f",&Matr[i][j]);
            }
            printf("\n");
        }

        for(i = 0; i < dimMatr; i++){
            for(j = 0; j < dimMatr; j++){
                printf("%.2f ", Matr[i][j]);
                //printf("\n");
            }
            printf(" \n");
        }

        printf("\n");
        printf("******");
        printf("\n");

        for(j = 0; j < dimMatr; j++){
            Minore = Minori(Matr,dimMatr,0,j);
            for(ii=0; ii <dimMatr-1;ii++){
                for(jj=0;jj<dimMatr-1;jj++){
                    printf("%.2f ",Minore[ii][jj]);
                }
                printf("\n");
            }
            detMin = pow(-1,j+2)*DetMat2(Minore);
            printf("detMin(1,%d)=%.2f\n",j+1,detMin);
            Det+=detMin;
            free(Minore);
        }
        printf("\nDeterminante = %.2f\n",Det);
        free(Matr);
        fclose(f);
    } else {
        printf("Impossibile leggere il file specificato");
    }



    return 0;
}

float **Minori(float **M, int dim, int i, int j){
    float **Minore;
    int ii, jj, imin, jmin;

    Minore = (float **) malloc((dim-1)*sizeof(float *));

    for(ii = 0; ii < dim; ii++){
        *(Minore+ii)=(float *) malloc((dim-1)*sizeof(float));
    }

    for(ii = 0, imin = 0; ii < dim; ii++){

        if(i == ii){
            continue;
        }

        for(jj = 0, jmin = 0; jj < dim; jj++){
            if(j == jj){
                continue;
            }

            Minore[imin][jmin++] = M[ii][jj];

        } // fine ciclo jj

        imin++;

    } // fine ciclo ii

    return(Minore);
}


float DetMat2(float **M){
    return( (M[0][0]*M[1][1]) - (M[1][0]*M[0][1]));
}