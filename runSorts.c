#include <stdio.h> 
#include <stdlib.h> 
#include "util/timer.h" 
#include "runSorts.h"
#include "algoritmos/algoritmo_insertion.h"
#include "algoritmos/algoritmo_merge.h"
#include "algoritmos/algoritmo_selection.h"
#include "algoritmos/algoritmo_bubble.h"



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
