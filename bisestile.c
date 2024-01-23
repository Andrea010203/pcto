#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci un anno\n");
    scanf("%d" , &x);
    

    if(x%4==0 && x%100>0)
    
    {
        printf("L'anno è bisestile\n");

    }
    else
    
    {
        printf("L'anno non è bisestile\n");
    }

    return(0);

}