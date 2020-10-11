#ifndef TIMER  
#define TIMER

typedef struct Timer{
  clock_t begin;
  clock_t end;
}Timer;

void startTimer(Timer* timer);
void stopTimer(Timer* timer);
void printDuration(Timer* timer);

#endif
