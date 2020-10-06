#include <stdio.h> 
#include <stdlib.h> 
#include "timer.h" 
#include "algoritmo_insertion.h"
#include "algoritmo_merge.h"
#include "algoritmo_selection.h"
#include "algoritmo_bubble.h"


void randomizeArray(long int* intArray,long int arraySize);

void runMergeSort(long int intArray[],long int arraySize);
void runInsertionSort(long int intArray[],long int arraySize);
void runSelectionSort(long int intArray[],long int arraySize);
void runBubbleSort(long int intArray[],long int arraySize);

int main(void) 
{
    printf("\nQuantidade \t   Tempo\n");

    long int oneHundred[100];
    randomizeArray(oneHundred,100);

    long int oneThousand[1000];
    randomizeArray(oneThousand,1000);

    long int tenThousand[10000];
    randomizeArray(tenThousand,10000);

    long int oneHundredThousand[100000];
    randomizeArray(oneHundredThousand,100000);

    printf("\n\nMERGE");
    printf("\n----------------------");
    runMergeSort(oneHundred,100);
    runMergeSort(oneThousand,1000);
    runMergeSort(tenThousand,10000);
    runMergeSort(oneHundredThousand,100000);
    
    printf("\n\nINSERTION");
    printf("\n----------------------");
    runInsertionSort(oneHundred,100);
    runInsertionSort(oneThousand,1000);
    runInsertionSort(tenThousand,10000);
    runInsertionSort(oneHundredThousand,100000);

    printf("\n\nSELECTION");
    printf("\n----------------------");
    runSelectionSort(oneHundred,100);
    runSelectionSort(oneThousand,1000);
    runSelectionSort(tenThousand,10000);
    runSelectionSort(oneHundredThousand,100000);

    printf("\n\nBUBBLE");
    printf("\n----------------------");
    runBubbleSort(oneHundred,100);
    runBubbleSort(oneThousand,1000);
    runBubbleSort(tenThousand,10000);
    runBubbleSort(oneHundredThousand,100000);

    printf("\n----------------------");



    return 0; 
} 

void runMergeSort(long int intArray[],long int arraySize){
    long int localIntArray[arraySize];
    long int i;
    for (i = 0; i < arraySize; i++){
      localIntArray[i]= intArray[i];
    }

    Timer timer;
    startTimer(&timer);
    //Algoritmo aqui
    mergeSort(localIntArray,0,arraySize);
    //Fim do algoritmo
    stopTimer(&timer);

    printf("\n%li \t\t",arraySize);
    printDuration(&timer);
}

void runInsertionSort(long int intArray[],long int arraySize){
    long int localIntArray[arraySize];
    long int i;
    for (i = 0; i < arraySize; i++){
      localIntArray[i]= intArray[i];
    }

    Timer timer;
    startTimer(&timer);
    //Algoritmo aqui
    insertionSort(localIntArray,arraySize);
    //Fim do algoritmo
    stopTimer(&timer);
    printf("\n%li \t\t",arraySize);
    printDuration(&timer);
}

void runSelectionSort(long int intArray[],long int arraySize){
    long int localIntArray[arraySize];
    long int i;
    for (i = 0; i < arraySize; i++){
      localIntArray[i]= intArray[i];
    }

    Timer timer;
    startTimer(&timer);
    //Algoritmo aqui
    selectionSort(localIntArray, arraySize);
    //Fim do algoritmo
    stopTimer(&timer);
    printf("\n%li \t\t",arraySize);
    printDuration(&timer);
}

void runBubbleSort(long int intArray[],long int arraySize){
    long int localIntArray[arraySize];
    long int i;
    for (i = 0; i < arraySize; i++){
      localIntArray[i]= intArray[i];
    }

    Timer timer;
    startTimer(&timer);
    //Algoritmo aqui
    bubbleSort(localIntArray,arraySize);
    //Fim do algoritmo
    stopTimer(&timer);
    printf("\n%li \t\t",arraySize);
    printDuration(&timer);
}


void randomizeArray(long int* intArray,long int arraySize) {
   long int i;
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < arraySize; ++i) {
      intArray[i] = rand();
   }
}

