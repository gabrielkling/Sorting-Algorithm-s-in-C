#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"

int main (){

	int i, j, tam;

	printf("Digite o tamanho do seu vetor:\n");
	scanf("%d", &tam);

	int vet[tam];

	for(i = 0; i<tam; i++){

		printf("Digite o elemento da posição %d do vetor:\n", i+1);
		scanf("%d", &vet[i]);		
	}

	printf("O vetor dado foi:\n");

	print(vet, tam);

	heapsort(vet, tam);

	printf("O vetor ordenado é:\n");

	print(vet, tam);

	printf("\n");

	return 0;

}