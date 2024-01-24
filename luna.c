
    #include <stdio.h>

    int main() {
    
    int annoLuna = 1969;

    
    int annoNascita;

    
    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &annoNascita);

    
    int differenzaAnni = annoNascita - annoLuna;

    
    if (differenzaAnni == 0) {
        printf("Sei nato l'anno in cui l'uomo è andato sulla Luna!\n");
    } else if (differenzaAnni > 0) {
        printf("Sei nato %d anni dopo l'anno in cui l'uomo è andato sulla Luna.\n", differenzaAnni);
    } else {
        printf("Sei nato %d anni prima dell'anno in cui l'uomo è andato sulla Luna.\n", -differenzaAnni);
    }

    return 0;
}
