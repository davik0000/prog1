#include <stdbool.h>

//gcc vegtelenparhuzamos.c -fopenmp -o vp 
///(FOPENMP)

int main ()
{

#pragma omp parallel
while (1) 
{}
return 0;

}

