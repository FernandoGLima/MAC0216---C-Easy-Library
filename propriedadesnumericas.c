#include "propriedadesnumericas.h"

int ehPar(long long num){
    if(num & 1){
        return 0;
    }
    else
        return 1;
}


int ehPrimo(long long num){
    long long div=2;
    int devolve;

    if(num<=1 || (num%div==0 && num!=2)){
        return 0;
    }
    div++;
    while(div<=(num/2)){
        devolve=num%div;
        if(devolve==0){
             return 0;
         }
        div+=2;
    }
    return 1;
}


int ehQuadradoPerfeito(long long num){
    long long min=0, max=3020000000, media;
    int flag=1;

    if(num==0){
        return 0;
    }
    while(flag){
        media=(max+min)/2;
        if(media*media==num){
            return 1;
        }
        else if(min+1==max){
            flag=0;
        }
        else if(media*media>num){
            max=media;
        }
        else if(media*media<num){
            min=media;
        }
    }
    return 0;
}


int ehCuboPerfeito(long long num){
    long long min=0, max=2100000, media;
    int flag=1;

    if(num==0){
        return 0;
    }
    while(flag){
        media=(max+min)/2;
        if(media*media*media==num){
            return 1;
        }
        else if(min+1==max){
            flag=0;
        }
        else if(media*media*media>num){
            max=media;
        }
        else if(media*media*media<num){
            min=media;
        }
    }
    return 0;
}


int ehFibonacci(long long num){
    long long var1=1, var2=1, fibo=1;

    if(num==1){
        return 1;
    }
    while(fibo<=num){
        fibo=var1+var2;
        var1=var2;
        var2=fibo;
        if(fibo==num){
            return 1;
        }
    }
    return 0;
}


int ehFatorial(long long num){
    long long fatorial=1;
    int var=1;

    while(fatorial<num){
        fatorial=var*fatorial;
        if(fatorial==num){
            return 1;
        }
        var++;
    }
    return 0;
}