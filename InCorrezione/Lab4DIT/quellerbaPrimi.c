/**quellerba fabio
programma in c che accetti una lista di numeri interi come argomento tramite linea di comandi 
e identifica quali numeri sono primi tra quelli forniti. Si assume che tutti gli argomenti siano interi
positivi./*/ 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Funzione per verificare se un numero è primo
bool primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        printf("Fornisci una lista di numeri interi come argomenti.\n");
        return 1;
    }

    printf("Numeri primi tra quelli forniti:\n");
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (primo(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

