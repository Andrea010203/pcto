#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("A quanti anni puoi prendere la patente? all'interno del tuo paese?\n");
    scanf("%d" , &x);
    printf("Quanti anni hai?\n");
    scanf("%d" , &y);
    if(y >=18)
    {
        printf("Puoi prendere la patente?\n");
    
     }
     if(y < 18)
     {
        printf("Non puoi prendere la patente\n");
    }
     return(0);
}