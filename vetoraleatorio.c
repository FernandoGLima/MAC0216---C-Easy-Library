#include "vetoraleatorio.h"
#include <stdlib.h>
#include <stdio.h>

long long *criaVetorAleatorio(int semente, int tamanho){
    long long *V;
    int i;

    V= malloc(tamanho*sizeof(long long));
    if(V==NULL){
        printf("Deu erro na alocação\n");
    }
    srand(semente);

    for(i=0; i<tamanho; i++){
        V[i]=(long long)rand()+(rand()/10)-1;
    }

    return V;
}