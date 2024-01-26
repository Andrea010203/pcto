    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>

struct Student {
    char name[50];
    char faculty[50];
    int difficulties;
    char challengingSubject[50];
    char numeroTelefonico[11];
   char persona[50];


};

    void assignSupport(struct Student *student) {
    int scelta;
    int indirizzo;

    printf("Quale tipo di difficolta riscontri?\n");
    printf("- 1 Problemi familiari\n- 2 Stress da troppe pressioni\n- 3 Ansia da prestazione\n- 4 Situazione sentimentale complicata\n- 5 Problemi con i membri della classe\n- 6 Difficoltà di concentrazione\n-7  Difficoltà d'apprendimento\n-8  Lacune passate\n- 9 Demotivazione sugli argomenti\n- 10 Il corso di studi che ho scelto non fa per me\n");
    scanf(" %d", &scelta);
    if (scelta >= 1 && scelta <= 5) 
    {
        printf("Hai difficoltà significative. Sarai assegnato a uno psicologo al quale verranno inviate le tue informazioni e successivamente verrai ricontattato.\n");
        sleep (1);
        printf("Regoliamo il prezzo in base al tuo ISEE, perciò in seguito ti verranno richiesti dei dati economici patrimoniali.\n Inserisci di seguito il tuo ISEE: ");
        int ISEE;
        scanf("%d", &ISEE );
        if(ISEE<14000)    
        {
            printf("Per te c'è una scontistica riservata, pari al 25%% dell'importo base\n");
        }
    }
    else if (scelta == 10)
    {
        printf("A quale corso, indirizzo o percorso preferiresti essere reindirizzato?\n");
        sleep (1);
        printf("-1 Classico\n- 2 Scientifico\n- 3 Linguistico\n- 4 Scienze Umane\n- 5 Scienze Applicate\n- 6 Agrario\n- 7 Socio Economico\n- 8 Ragioneria\n- 9 Turismo\n- 10 Alberghiero\n- 11 Meccanica, Meccatronica ed Energia\n- 12 Trasporti e Logistica\n- 13 Elettronica ed Elettrotecnica\n- 14 Informatica e Telecomunicazioni\n- 15 Sistema Moda\n- 16 Costruzioni, Ambiente e Territorio\n- 17 Facoltà di Economia\n- 18 Facoltà di Giurisprudenza\n- 19 Ingegneria\n- 20 Facoltà di Lettere antiche/ Moderne\n"); 
        scanf(" %d", &indirizzo);
        if(indirizzo == 1)
        {
            printf("Verrai indirizzato ad un Liceo Classico vicino alla tua zona\n");
        }
        else if(indirizzo == 2)
        {
            printf("Verrai indirizzato ad un Liceo Scientifico vicino alla tua zona\n");
        }
        else if(indirizzo == 3)
        {
            printf("Verrai indirizzato ad un Liceo Linguistico vicino alla tua zona\n");
        }
        else if(indirizzo == 4)
        {
            printf("Verrai indirizzato ad un Liceo Scienze Umane vicino alla tua zona\n");
        }
        else if(indirizzo == 5)
        {
            printf("Verrai indirizzato ad un Liceo di Scienze Applicate vicino alla tua zona\n");
        }
        else if(indirizzo == 6)
        {
            printf("verrai indirizzato ad un istituto Agrario vicino alla tua zona\n");
        }
        else if(indirizzo == 7)
        {
            printf("Verrai indirizzato ad un istituto Socio Economico vicino alla tua zona\n");
        }
        else if(indirizzo == 8)
        {
            printf("Verrai indirizzato ad un istituto di Ragioneria vicino alla tua zona\n");
        }
        else if(indirizzo == 9)
        {
            printf("Verrai indirizzato ad un istituto di Turismo vicino alla tua zona\n");
        }
        else if(indirizzo == 10)
        {
            printf("Verrai indirizzato ad un istituto Alberghiero vicino alla tua zona\n");
        }
        else if(indirizzo == 11)
        {
            printf("Verrai indirizzato ad un istituto di Meccanica, Meccatronica ed Energia vicino alla tua zona\n");
        }
        else if(indirizzo == 12)
        {
            printf("Verrai indirizzato ad un istituto di Trasporti e Logistica vicino alla tua zona\n");
        }
        else if(indirizzo == 13)
        {
            printf("Verrai indirizzato ad un istituto di Elettronica ed Elettrotecnica vicino alla tua zona\n");
        }
        else if(indirizzo == 14)
        {
            printf("Verrai indirizzato ad un istituto di Informatica e Telecomunicazioni vicino alla tua zona\n");
        }
        else if(indirizzo == 15)
        {
            printf("Verrai indirizzato ad un istituto di Moda vicino alla tua zona\n");
        }
        else if(indirizzo == 16)
        {
            printf("Verrai indirizzato ad un istituto di Costruzioni, Ambiente e Territorio vicino alla tua zona\n");
        }
        else if(indirizzo == 17)
        {
            printf("Verrai indirizzato alla facoltà di Economia della tua Università o di un'altra a tua scelta\n\n");
        }
        else if(indirizzo == 18)
        {
            printf("Verrai indirizzato alla facoltà di Giurisprudenza della tua Università o di un'altra a tua scelta\n");
        }
        else if(indirizzo == 19)
        {
            printf("Verrai indirizzato alla facoltà di Ingegneria della tua Università o di un'altra a tua scelta\n");
        }
        else if(indirizzo == 20)
        {
            printf("Verrai indirizzato alla facoltà alla facoltà di Lettere Moderne/Antiche della tua Università o di un'altra a tua scelta\n");
        }




        

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

    printf("Sei uno Studente, Professore, Tutor o Pscicologo ");
    scanf(" %[^\n]s", student.persona);
    
    if(strcmp(student.persona, "Studente") == 0)
    {
     assignSupport(&student);   
    }
    if(strcmp(student.persona, "Tutor") == 0)
    {
      char s[10];
      printf("Perfetto! Vuoi essere aggiunto al nostro database di supoporto per gli studenti studenti?\n");
      scanf("%s", s);
      if (strcmp(s, "si") == 0)
      {
        printf("Grazie per il tuo aiuto!\n");
      }
      else
      {
        printf("Ci dispiace che tu non sia dei nostri, facci sapere sei cambierai idea!A presto!\n");
      }

    }
     if(strcmp(student.persona, "Professore") == 0)
    {
        char s[10];
      printf("Perfetto! Vuoi essere aggiunto al nostro database di supoporto per gli studenti studenti?\n");
      scanf("%s", s);
      if (strcmp(s, "si") == 0)
      {
        printf("grazie per il tuo aiuto!\n");
      }
      else
      {
        printf("Ci dispiace che tu non sia dei nostri, facci sapere sei cambierai idea!A presto!\n");
      }
        
    }
     if(strcmp(student.persona, "Psicologo") == 0)
    {
        char s[10];
      printf("Perfetto! Vuoi essere aggiunto al nostro database di supoporto per gli studenti studenti?\n");
      scanf("%s", s);
      if (strcmp(s, "si") == 0)
      {
        printf("grazie per il tuo aiuto!");
      }
      else
      {
        printf("Ci dispiace che tu non sia dei nostri, facci sapere sei cambierai idea!A presto!");
      }
        
    }

    printf("Se dovessi riscontrare ulterirori problemi o se non dovessi essere soddisfatto dei servizi proposti, recati sul sito allegato ed usufruisci del servizio di Orienteering per essere reindirizzato in Classi, Corsi o Percorsi Scolastici o Universitari differenti da quelli precedentemente frequentati da te");

    leaveFeedback();

    printf("Grazie e arrivederci!\n");

    return 0;
}
