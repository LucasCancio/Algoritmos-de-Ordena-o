#include <stdio.h>
#include <stdlib.h>

void insertionSort(long int intArray[], long int tam);

void insertionSort(long int intArray[], long int tam){   
    long int j= 0;
    long int i=0;
    long int aux=0;
    long int contador=0;

    for (contador = 1; contador < tam; contador++) {
        aux = intArray[contador];
        j = contador - 1;
        while (j >= 0 && intArray[j] > aux) {
            intArray[j + 1] = intArray[j];
            j = j - 1;
        }

        intArray[j + 1] = aux;
    }	

}