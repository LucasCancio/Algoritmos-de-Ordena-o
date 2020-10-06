#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

typedef struct Timer{
  clock_t begin;
  clock_t end;
}Timer;

void startTimer(Timer* timer){
  timer->begin=clock();
}

void stopTimer(Timer* timer){
  timer->end=clock();
}

void printDuration(Timer* timer){
  double duration = ((double) (timer->end - timer->begin)) / CLOCKS_PER_SEC;
    
  printf("%gms", duration*1000);
}