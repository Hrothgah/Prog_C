/* Scrivere un semplice programma che, presi due numeri interi in input,
 * ne esegua la somma e la stampi.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){
	int x, y, somma;

	printf("Digita il primo addendo e premi INVIO\n");
	scanf("%d", &x);
	printf("Digita il secondo addendo e premi INVIO\n");
	scanf("%d", &y);
	somma = x + y;
	printf("%d + %d = %d\n", x, y, somma);

	system("PAUSE");

	return 0;

}
