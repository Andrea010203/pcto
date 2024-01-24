#include <stdio.h>

    int main() 
    {
    
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int somma;
    float media;


    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("Inserisci il secondo numero");
    scanf("%d", &numero2);
    printf("Inserisci il terzo numero");
    scanf("%d", &numero3);
    printf("Inserisci il quarto numero");
    scanf("%d", &numero4);
    printf("Inserisci il quinto numero");
    scanf("%d", &numero5);

    somma = numero1 + numero2 + numero3 + numero4 + numero5;

     media = ((float) somma) / 5;

     printf("La somma dei numeri è: %d\n", somma);
    printf("La media dei numeri è: %.2f\n", media);

    return (0);
}
