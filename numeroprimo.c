    #include <stdio.h>

        int main() 
{
        int numero, somma = 0, contatore = 0;

     printf("Inserisci una sequenza di numeri interi positivi. Inserisci un numero negativo per terminare.\n");

        while (1) 
    {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);

        
        if (numero < 0) {
            break;
        }

        
        somma += numero;
        contatore++;

        
        float media = (float)somma / contatore;
        printf("Media attuale: %.2f\n", media);
    }

    printf("Programma terminato.\n");

    return 0;
}
