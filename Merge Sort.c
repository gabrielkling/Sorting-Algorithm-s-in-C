#include "merge.h"

void merge(int vet[], int e, int m, int d){

    int i, j, k;

    int n1 = m - e + 1;//Tamanho do vetor da esquerda ate o meio
    int n2 = d - m;//Tamanho do vetor da direita ate o meio

    int E[n1], D[n2];//Vetores da esquerda e da direita

    //Copiando os dados para os vetores auxiliares.

    for(i = 0; i < n1; i++){

        E[i] = vet[e + i];

    }

    for(j = 0; j < n2; j++){

        D[j] = vet[m + 1 + j];

    }

    //Reiniciando as variaveis de controle

    i = 0;
    j = 0;
    k = e;

    while(i < n1 && j < n2){

        if(E[i] <= D[j]){//Se elemento de E[i] for menor ou igual ao elemento de D[j], o vetor recebe o E[i]

            vet[k] = E[i];
            i++;
        }

        else{//Se nao, o vetor recebe D[j] e assim vai ordenando enquanto o i for menor do que o tamanho de E e j for menor que o tamanho de D;

            vet[k] = D[j];
            j++;
        }

        k++;

    }

    while(i < n1){//Se i continua menor do que n1, ainda restam elementos para inserir.

        vet[k] = E[i];
        i++;
        k++;
    }

    while(j < n2){//Se j continua menor do que n2, ainda restam elementor para inserir no vet.

        vet[k] = D[j];
        j++;
        k++;

    }
}

void mergeSort(int vet[], int e, int d){

    int m;

    if(e < d){

        m = (e + d)/2;

        mergeSort(vet, e, m);

        mergeSort(vet, m+1, d);

        merge(vet, e, m, d);        

    }
}

void print(int V[], int tam){

    int i;

    for(i = 0; i < tam; i++){

        printf("%i ", V[i]);
    }

    printf("\n");
}