#include <stdio.h>

/*!
* \brief Função: criaVetorAleatorio
* Esta função irá criar um vetor contendo números pseudo-aleatorios. Faz isto através da alocação dinamica
* de uma certa quantidade de espaço(esta quantidade, será o espaço de um long long vezes o número inetiro
* que será passado como parametro). Os números pseudo-aleatorios serão gerados com auxilio das funções srand
* e rand, a função srand será alimentada com uma semente que será um numero passado pelo usuario.
*
* \param semente: (int) é o número que irá alimentar a função srand
* \param tamanho: (int) determinará o tamanho do vetor
* \return retorno: (long long) retorna o endereço do inicio do vetor (da memória alocada)
*/
long long *criaVetorAleatorio(int semente, int tamanho);