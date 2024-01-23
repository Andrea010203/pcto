#include <stdio.h>

int main()
{
    int prezzounitario = 5;
    int pezziordinati;
    int prezzo;
    float sconto1;
    float sconto2;
    printf("Quanti ordini vuoi fare?\n");
    scanf("%d", &pezziordinati);
    while(pezziordinati > 0)
    {
    prezzo = prezzounitario * pezziordinati;
    sconto1 = prezzo - (prezzo * 10/100);
    sconto2 = prezzo - (prezzo * 15 / 100);
    if (pezziordinati>50)
    {
        printf("Il prezzo totale è: %f\n", sconto2);
    }
    else if (pezziordinati>30)
    {
        printf("Il prezzo totale è: %f\n", sconto1);
    }
    else if (pezziordinati<30 && pezziordinati>0)
    {
        printf("Il prezzo è: %d\n", prezzo);
    }
    printf("Quanti ordini vuoi fare?\n");
    scanf("%d", &pezziordinati);
    }
    return (0);
}

