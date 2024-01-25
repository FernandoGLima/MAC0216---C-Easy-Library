#include <stdio.h>
#include <stdlib.h>
#include "propriedadesnumericas.h"
#include "vetoraleatorio.h"
#include <time.h>

int main () {
    int semente=15, tamanho=25, i, recebe_func;
    long long *Vetor;
    long tick, tack, clocks;
    double duracao;

    tick= clock();
    Vetor= criaVetorAleatorio(semente, tamanho);
    tack= clock();
    clocks=tack-tick;
    duracao=(double)clocks/CLOCKS_PER_SEC;
    printf("Tempo de execução função criaVetorAleatorio: %lf\n", duracao);

    for(i=0; i<tamanho; i++){
        printf("Número aleatorio gerado pelo vetor: %lld\n", Vetor[i]);

        tick= clock();
        recebe_func=ehPar(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehPar: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);

        tick= clock();
        recebe_func=ehPrimo(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehPrimo: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);

        tick= clock();
        recebe_func=ehQuadradoPerfeito(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehQuadradoPerfeito: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);

        tick= clock();
        recebe_func=ehCuboPerfeito(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehCuboPerfeito: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);
        
        tick= clock();
        recebe_func=ehFibonacci(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehFibonacci: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);

        tick= clock();
        recebe_func=ehFatorial(Vetor[i]);
        tack= clock();
        clocks=tack-tick;
        duracao=(double)clocks/CLOCKS_PER_SEC;
        printf("Resultado ehFatorial: %d\n", recebe_func);
        printf("Tempo de execução: %lf\n\n", duracao);
    }

    free(Vetor);
    printf("\n");

    return 0;
}