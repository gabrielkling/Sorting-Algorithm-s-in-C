#include "quicksort.h"

int particao(int vet[], int e, int d){

    int i = e, j = d;

    int aux;

    int pivo = vet[(e+d)/2];

    while(i <= j){
        while(vet[i] < pivo){
            i++;
        }
        while(vet[j] > pivo){
            j--;
        }

        if(i < j){        

            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;

            i++;
            j--;
        }

        else{

            return i;
        }

    }
    return i;
}

void quicksort(int vet[], int e, int d){

    int pivo;

    if(e < d){

        pivo = particao(vet, e, d);
        quicksort(vet, e, pivo-1);
        quicksort(vet, pivo + 1, d);
    }
}

void print(int V[], int tam){
    int i;
    
    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}
