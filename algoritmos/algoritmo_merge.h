#include <stdio.h> 
#include <stdlib.h> 

void mergeSort(long int intArray[], long int begin, long int end);
void merge(long int intArray[], long int begin,long int mid,long int end);

void mergeSort(long int intArray[],long int begin, long int end){
    if(end - begin > 1){ 
        long int mid= (long int)(end + begin)/2;

        mergeSort(intArray,begin,mid);
        mergeSort(intArray,mid,end);
        merge(intArray,begin,mid,end);
    }
}

void merge(long int intArray[], long int begin,long int mid,long int end){
    long int leftSize= mid-begin;
    int left[leftSize];

    long int i;
    for(i=0; i<leftSize;i++){
        left[i]=intArray[begin + i];
    }

    long int rightSize= end-mid;
    int right[rightSize];

    for(i=0; i<rightSize;i++){
        right[i]=intArray[mid + i];
    }

    long int topLeft=0, topRight=0;
    for(i=begin; i<end;i++){
        if(topLeft >= leftSize){
            intArray[i]= right[topRight];
            topRight++;
        }
        else if(topRight >= rightSize){
            intArray[i]= left[topLeft];
            topLeft++;
        }
        else if(left[topLeft] < right[topRight]){
            intArray[i]= left[topLeft];
            topLeft++;
        }else{
            intArray[i]= right[topRight];
            topRight++;
        }
        
    }
}