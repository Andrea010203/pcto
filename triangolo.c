#include <stdio.h>
int main() 
{
    float lato1, lato2, lato3;
    printf("Inserisci la lunghezza del primo lato\n");
    scanf("%f", &lato1);
    printf("Inserisci la lunghezza del secondo lato\n");
    scanf("%f", &lato2);
    printf("Inserisci la misura del terzo lato\n");
    scanf("%f", &lato3);
    
    
    if (lato1+lato2>lato3 && lato1+lato3>lato2 && lato2+lato3>lato1)
    {
        printf("I lati possono essere  le lunghezze di un triangolo.\n");
    }
        else
    {
        printf("I lati NON possono essere le lunghezze si un triangolo.\n ");

    }

    return(0);
}