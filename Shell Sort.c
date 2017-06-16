#include "shell.h"

int shellsort(int n, int vet[]){
	
	int i, j, m, pulo;

	pulo = n/2;

	while(pulo>0){

		for(i = pulo; i<n; i++){
			m = vet[i];
			j = i;

			while(j >= pulo && vet[j-pulo] > m){

				vet[j] = vet[j-pulo];
				j = j-pulo;

			}

			vet[j] = m;

		}

		pulo = pulo/2;

	}
}

void print(int V[], int tam){

    int i;

    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}