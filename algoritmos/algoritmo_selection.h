#include <stdio.h>

void selectionSort(long int num[], long int tam);

void selectionSort(long int num[], long int tam)
{
  long int i, j, min, aux;
  for (i = 0; i < (tam-1); i++)
  {
     min = i;
     for (j = (i+1); j < tam; j++)
    {
       if(num[j] < num[min])
         min = j;
    }
     if (num[i] != num[min])
    {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
    }
  }
}