    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

struct Student {
    char name[50];
    char faculty[50];
    int difficulties;
    char challengingSubject[50];
    char numeroTelefonico[11];

};

    void assignSupport(struct Student *student) {
    int scelta;
    // if (student->difficulties > 5) {
    //     printf("Hai difficoltà significative. Sarai assegnato a uno psicologo.\n");
    // } else {
    //     printf("Sarai assegnato a un professore, tutor o ex studente per la materia %s.\n", student->challengingSubject);
    // }
    printf("Quale tipo di difficolta riscontri?\n");
    printf("- 1 Problemi familiari\n- 2 Stress da troppe pressioni\n- 3 Ansia da prestazione\n- 4 Situazione sentimentale complicata\n- 5 Difficoltà di concentrazione\n- 6 Difficoltà d'apprendimento\n- 7 Lacune passate\n- 8 Demotivazione sugli argomenti\n");
    scanf(" %d", &scelta);
    if (scelta >= 1 && scelta <= 5) 
    {
        printf("Hai difficoltà significative. Sarai assegnato a uno psicologo al quale verranno inviate le tue informazioni e successivamente verrai ricontattato.\n");
    } 
    else 
    {
        printf("Sarai assegnato a un professore, tutor o ex studente, per la materia %s, al quale verranno inviate le tue informazioni e successivamente verrai ricontattato.\n", student->challengingSubject);
    }

}

void leaveFeedback() {
    char feedback[200];
    printf("Grazie per aver utilizzato il sito. Lascia una recensione (positiva/negativa): ");
    scanf(" %[^\n]s", feedback);

    if (strcmp(feedback, "positiva") == 0) {
        printf("Grazie per il tuo feedback positivo!\n");
    } else if (strcmp(feedback, "negativa") == 0) {
        printf("Ci dispiace che tu non abbia avuto un'esperienza positiva. Cercheremo di migliorare.\n");
    } else {
        printf("Grazie per il feedback.\n");
    }
}

int main() {
    struct Student student;

    printf("Benvenuto! Inserisci il tuo nome: ");
    scanf(" %[^\n]s", student.name);
    
    printf("Inserisci il tuo numero di telefono: ");
    scanf(" %[^\n]s", student.numeroTelefonico);

    printf("Inserisci la tua facoltà o indirizzo di studi: ");
    scanf(" %[^\n]s", student.faculty);

    printf("Su una scala da 1 a 10, quanto ritieni difficile il tuo percorso di studi? ");
    scanf("%d", &student.difficulties);

    printf("In quale ambito hai più difficoltà (matematica, fisica, latino, greco, analisi, statistica)? ");
    scanf(" %[^\n]s", student.challengingSubject);

    assignSupport(&student);

    printf("Se dovessi riscontrare ulterirori problemi o se non dovessi essere soddisfatto dei servizi proposti, recati sul sito allegato ed usufruisci del servizio di Orienteering per essere reindirizzato in Classi, Corsi o Percorsi Scolastici o Universitari differenti da quelli precedentemente frequentati da te");

    leaveFeedback();

    printf("Grazie e arrivederci!\n");

    return 0;
}
