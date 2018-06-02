#include <stdio.h>
#include <stdlib.h>

int main() {
    int *V, i, *p, *q, a, n=5;
    V = (int *)malloc((n+1)*sizeof(int));

    p = V;
    *p = 0;
    *(p+1)=1;
    *(p+2)=3;

    for(i = 3; i <= n; i++){
        if(i%2 == 0){
            *(p+i)=(i/2)*(i+1);
        }else {
            *(p+i)=((i/2)*(i+1))+(i/2+1);
        }
    }

    for(q = V+4; (q-p)>0; p++,q--){
        printf("%d %d ", (*p),(*q));
    }

    return 0;
}