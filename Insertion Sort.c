#include "insertion.h"

int insertionsort(int n, int vetor[]){

	int i, j, t;

	for(i = 1; i<n; i++){

		j = i;
		t = vetor[i];

		while(vetor[j-1]>t){
			vetor[j] = vetor[j-1];
			j = j-1;
		}

		vetor[j] = t;
	}

}

void print(int V[], int tam){

    int i;

    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}