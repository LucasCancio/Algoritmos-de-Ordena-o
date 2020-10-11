#include <stdio.h>
#include <stdlib.h>
#include "randomTest.h"
#include "../util/arrayFactory.h"
#include "../runSorts.h"

void runRandomTests() 
{
    printf("\n\n--ARRAY ALEATÓRIO--");

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
} 
