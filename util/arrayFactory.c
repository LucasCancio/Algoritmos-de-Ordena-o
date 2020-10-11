#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrayFactory.h"

void randomizeArray(long int* intArray,long int arraySize) {
   long int i;
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < arraySize; ++i) {
      intArray[i] = rand();
   }
}

void createInverseArray(long int* intArray, long int arraySize){
  long int i;
  for(i=arraySize; i>0; i--){
    intArray[arraySize-i]= i;
  }
}