#include <stdio.h> 
#include <stdlib.h> 
#include "tests/randomTest.h"
#include "tests/inverseTest.h"


int main(void) 
{
    printf("Qtde\t\tDuração");
    runInverseTests();
    runRandomTests();
    return 0; 
} 


