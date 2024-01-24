    #include <stdio.h>

    int main() 
{

    float lato1, lato2, lato3;

    
    printf("Inserisci la lunghezza del primo lato: ");
    scanf("%f", &lato1);

    printf("Inserisci la lunghezza del secondo lato: ");
    scanf("%f", &lato2);

    printf("Inserisci la lunghezza del terzo lato: ");
    scanf("%f", &lato3);
    if (lato1+lato2>lato3 && lato1+lato3>lato2 && lato2+lato3>lato1)
    {
        printf("I lati possono essere  le lunghezze di un triangolo.\n");
    }
        else
    {
        printf("I lati NON possono essere le lunghezze di un triangolo.\n ");
        return(0);
    }

    
    if (lato1 == lato2 && lato2 == lato3) {
        printf("Il triangolo e' equilatero.\n");
    } else if (lato1 != lato2 && lato2 != lato3 && lato1 != lato3) {
        printf("Il triangolo e' scaleno.\n");
    } else 
    {
        printf("Il triangolo e' isoscele.\n");
    }

    return 0;
}