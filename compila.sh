#!/bin/bash 

gcc -c -fPIC -o vetoraleatorio.o vetoraleatorio.c
    if [ $? -ne 0 ]; then
        exit 1
    fi
gcc -o libvetoraleatorio.so -shared vetoraleatorio.o
    if [ $? -ne 0 ]; then
        exit 1
    fi


gcc -Wall -c -o propriedadesnumericas.o propriedadesnumericas.c
    if [ $? -ne 0 ]; then
        exit 1
    fi
ar -rcv libpropriedadesnumericas.a propriedadesnumericas.o
    if [ $? -ne 0 ]; then
        exit 1
    fi

export LD_LIBRARY_PATH=${PWD}:${LD_LIBRARY_PATH}
gcc -Wall -o testa testa.c libpropriedadesnumericas.a -L${PWD} -lvetoraleatorio
    if [ $? -ne 0 ]; then
        exit 1
    fi

./testa 

doxygen -g
    if [ $? -ne 0 ]; then
        exit 1
    fi
doxygen Doxyfile

exit 0