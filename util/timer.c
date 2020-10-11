#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include "timer.h"

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