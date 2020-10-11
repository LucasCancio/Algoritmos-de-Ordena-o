#include <stdio.h>
#include <stdlib.h>

int bubbleSort(long int numeros[],long int tam);

int bubbleSort(long int numeros[],long int tam){
   long int i, aux, contador;

   for (contador = 1; contador < tam; contador++) {
       for (i = 0; i < tam - 1; i++) {
           if (numeros[i] > numeros[i + 1]) {
               aux = numeros[i];
               numeros[i] = numeros[i + 1];
               numeros[i + 1] = aux;
           }
       }
   }

   return 0;
}