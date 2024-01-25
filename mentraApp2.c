#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char faculty[50];
    int difficulties;
};

void assignSupport(struct Student *student) {
    if (student->difficulties > 5) {
        printf("Hai difficoltà significative. Sarai assegnato a uno psicologo.\n");
    } else {
        printf("Sarai assegnato a un professore, tutor o ex studente.\n");
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

    printf("Inserisci la tua facoltà o indirizzo di studi: ");
    scanf(" %[^\n]s", student.faculty);

    printf("Su una scala da 1 a 10, quanto ritieni difficile il tuo percorso di studi? ");
    scanf("%d", &student.difficulties);

    assignSupport(&student);

    leaveFeedback();

    printf("Grazie e arrivederci!\n");

    return 0;
}
