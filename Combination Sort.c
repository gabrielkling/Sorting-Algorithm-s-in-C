#include "combsort.h"

void combsort(int vet[], int tam) {

    float dec = 1.247330950103979;

    int pulo = tam, trocado = 1, troca, i;

    while ((pulo > 1) || trocado) {

        if (pulo > 1)
           pulo = pulo / dec;

        trocado = 0;
        i = 0;

        while ((pulo + i) < tam) {

            if (vet[i] - vet[i + pulo] > 0) {
                troca = vet[i];
                vet[i] = vet[i + pulo];
                vet[i + pulo] = troca;
                trocado = 1;
            }

            ++i;
        }
    }
}

void print(int V[], int tam){

    int i;

    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}