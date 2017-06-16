#include "selection.h"

int selectionsort(int n, int vet[]){
	
	int i, m, j, t;

	for(i = 0; i<=n; i++){

		m = i;

		for(j = i+1; j<=n; j++){

			if(vet[j]<vet[m]){
				m = j;
			}
		}

		t = vet[i];
		vet[i] = vet[m];
		vet[m] = t;
	}
}

void print(int V[], int tam){

    int i;

    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}