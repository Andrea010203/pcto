#include <stdio.h>

void addizione(int a, int b)
{

    printf("La somma dei due nuemri è uguale a :%d\n", (a-b));
}

void sottrazione(int a, int b)
{
     
    printf("La differenza dei due numeri è uguale a :%d\n", (a-b));

}

void moltiplicazione(int a, int b)
{
    printf("Il prodotto dei due numeri è uguale a :%d\n", (a-b));

}

void divisione(int a, int b)
{
    printf("Il quoziente dei due numeri è uguale a :%d\n", (a-b));
}

int main()
{
    int x;
    int y;
    int z;

    printf("Inserisci primo numero\n");
    scanf("%d", &x);

    printf("Inserisci secondo numero\n");
    scanf("%d", &y);

    printf("Che operazione vuoi svolgere\n");

    printf("Premi 1 per fare l'addizione\nPremi 2 per fare la sottrazione\nPremi 3 per fare la moltiplicazione\nPremi 4 per fare la divisione\n");
    scanf("%d", &z);

    if (z == 1)
    
    {
        
         addizione(x, y);
    
    }
    else if (z == 2)
    {
        sottrazione(x, y);
    
    }
    else if (z == 3)
    {
        moltiplicazione(x, y);
    
    }
    else if (z == 4);
    {
        divisione(x, y);
    }
    return(0);

}