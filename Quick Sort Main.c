#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(){

    int tam, i;

    printf("Digite o tamanho do vetor:\n");
    scanf("%i", &tam);

    int vet[tam];

    for(i = 0; i < tam; i++){

        printf("Digite o elemento da posicao %i do vetor:\n", i+1);
        scanf("%i", &vet[i]);
    }

    printf("O vetor dado foi:\n");
    print(vet, tam);

    quicksort(vet, 0, tam-1);

    printf("O vetor ordenado e:\n");
    print(vet, tam);
    
}



