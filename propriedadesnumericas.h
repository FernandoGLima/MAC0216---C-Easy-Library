#include <stdlib.h> 
#include <stdio.h>

/*!
*\brief Função: ehPar
*Verifica se um número é par. Faz isto realizando uma comparacao (uma operação booleana AND) entre 
*os bits do numero desejado e o numero 1. Caso o último bit do numero desejado seja 1, significa
*que ele é ímpar
*
*\param num: (long long) número que será testado se é par
*\return retorno: (int) 1 se for par. 0 se for ímpar
*/
int ehPar(long long num);

/*!
*\brief Função: ehPrimo
*Verifica se um número é primo. Faz isto verificando se existe algum numero que divida este suposto primo.
*Primeiramente, verifica se esse suposto primo é par ou menor igual a 1 (se for, não é primo).
*Após isto, vai verificando até a metade do valor deste numero se existe algum divisor, se existir ele 
*não é primo.
*
*\param num: (long long) número que será testado se é primo.
*\return retorno: (int) 1 se for primo. 0 se não.
*/
int ehPrimo(long long num);

/*!
*\brief Função: ehQuadradoPerfeito
*Verifica se um número é um quadrado perfeito. Faz isto pelo método de busca binária, primeiramente um valor
*máximo é atribuido a variavel max (este valor é uma aproximação para o maior long long que pode ser elevado
*ao quadrado), e um valor minimo para a variavel min, faz a media entre estes valores e verifica se o quadrado
*da media é igual ao suposto quadrado perfeito. Se não for, verifica se a média ao quadrado é maior ou menor 
*que o número. Se for maior, max recebe o valor da média e repete-se o processo, se for menor, então min 
*recebe o valor da média e repetes-se o processo.
*
*\param num: (long long) número que será testado se é um quadrado perfeito
*\return retorno: (int) 1 se for quadrado perfeito. 0 se não.
*/
int ehQuadradoPerfeito(long long num);

/*!
*\brief Função: ehCuboPerfeito
*Verifica se um número é um cubo perfeito. Faz isto pelo métofo da busca binária, primeiramente um valor
*máximo é atribuído a variável max (este valor é uma aproximação para o maior long long que pode ser elevado
*ao cubo), e um valor minimo para a variavel min, faz a media entre estes valores verifica se o cubo da média
*é igual ao suposto cubo perfeito. Se não for, verifica se a média ao cubo é maior ou menor que o número.
*Se for maior, max recebe o valor da média e repete-se o processo, se for menor min recebe o valor da média
*e repete-se o processo.
*
*\param num: (long long) número que será testado se é um cubo perfeito
*\return retorno: (int) 1 se for um cubo perfeito. 0 se não.
*/
int ehCuboPerfeito(long long num);

/*!
*\brief Função: ehFibonacci
*Verifica se um número pertence a famosa sequencia de Fibonacci. Faz isto criando a sequencia de fibonacci,
*esta basicamente é a soma de dois números anterios resultará no próximo número pertencente a sequencia.
*Então inicia-se duas variaveis com valor 1 e soma ambas atribuindo o valor para uma terceira, compara-se
*o valor desta com o número e verifica se são iguais. Se não for a var1(primeira variavel) recebe o valor 
*da segunda, a segunda recebe o valor da terceira e repete-se o processo, até encontrar o número ou a sequencia
*ser maior que o suposto.
*
*\param num: (long long) número que será testado se pertence a sequencia de fibonacci
*\return retorno: (int) 1 se ele pertencer. 0 se não.
*/
int ehFibonacci(long long num);

/*!
*\brief Função: ehFatorial
*Verifica se um número é um número fatorial, ou seja, se existe algum fatorial que resulte em um valor igual
*a ele. Faz isto calculando fatorias e comparando com o suposto numero fatorial, começa do fatorial 1 e
*incrementa para calcular o próximo fatorial e compara novamente.
*
*\param num: (long long) número que será testado se ele é um número fatorial
*\return retorno: (int) 1 se ele for um número fatorial. 0 se não.
*/
int ehFatorial(long long num);