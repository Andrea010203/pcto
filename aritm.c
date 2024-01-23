#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);

    
    if (num1 - num2 == num2 - num3) 
    {
        printf("I numeri formano una progressione aritmetica.\n");
    } else {
        printf("I numeri non formano una progressione aritmetica.\n");
    }

    return (0);
}
