/*FUNCIONANDO CORRETAMENTE*/

#include <stdio.h>
#include <stdlib.h>
#include "merge.h"

int main(){

    int tam, i;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%i", &tam);

    int vet[tam];

    for(i = 0; i < tam; i++){

        printf("Digite o valor da posicao %i do vetor:\n", i+1);
        scanf("%i", &vet[i]);
    }

    printf("O vetor dado foi:\n");

    print(vet, tam);

    int d = tam-1, e = 0;

    mergeSort(vet, e, d);

    printf("O vetor ordenado eh:\n");

    print(vet, tam);

}