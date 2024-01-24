#include <stdio.h>
#include <math.h>

int main() 
{
    
    float lato1;
    float lato2;
    float base;
    float altezza; 
    
    printf("Primo lato");
    scanf("%f", &lato1);
    printf("Altezza");
    scanf("%f", &altezza);
    printf("Base");
    scanf("%f", &base);
    printf("Secondo lato");
    scanf("%F", &lato2);
    printf("%f\n%f\n", (base*altezza)/2, base+lato1+lato2);
    
    
    return 0;
}
   