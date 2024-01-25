    #include <stdio.h>
    #include <stdlib.h>

// Definizione di una struttura per rappresentare un singolo task
struct Task {
    int id;
    char description[100];
    int priority;
    // Altre informazioni relevanti al task
};

// Funzione per aggiungere un nuovo task
void addTask(struct Task tasks[], int *taskCount) {
    struct Task newTask;
    newTask.id = *taskCount + 1;

    printf("Inserisci la descrizione del task: ");
    scanf(" %[^\n]s", newTask.description);

    printf("Inserisci la priorita del task (1-10): ");
    scanf("%d", &newTask.priority);

    tasks[*taskCount] = newTask;
    (*taskCount)++;

    printf("Task aggiunto con successo!\n");
}

// Funzione per visualizzare tutti i task
void viewTasks(struct Task tasks[], int taskCount) {
    if (taskCount == 0) {
        printf("Nessun task presente al momento.\n");
    } else {
        printf("Elenco dei task:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("ID: %d, Descrizione: %s, Priorita: %d\n", tasks[i].id, tasks[i].description, tasks[i].priority);
        }
    }
}

int main() {
    struct Task tasks[100];  // Cap max di 100 task
    int taskCount = 0;  // Contatore del numero di task

    int choice;

    do {
        // Menù dell'applicazione
        printf("\nMenu:\n");
        printf("1. Aggiungi un nuovo task\n");
        printf("2. Visualizza tutti i task\n");
        printf("3. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                viewTasks(tasks, taskCount);
                break;
            case 3:
                printf("Uscita dall'applicazione.\n");
                break;
            default:
                printf("Opzione non valida. Riprova.\n");
        }
    } while (choice != 3);

    return 0;
}
