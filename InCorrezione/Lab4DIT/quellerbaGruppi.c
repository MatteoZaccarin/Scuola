//quellerba fabio
//programma c che accetti una sequanza di caratteri (stringhe) linea di comando 
//e considera un carattere 1 o 0, un gruppo definito in sequenza consecutiva di caratteri identici
//ignorare i caratteri 1 o 0, stampare numero di gruppi consecutivi distinti 1 e 0, se non ci sono manda un messaggio.
//input: programma 110011abc0101 output: numeri consecutivi al 7, idem con il secondo input 1111000110 e output 4
//no break no return solo alla fine mettere in una sola cella 0 e 1 non codideratelo non con una stringa usando atoi 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Utilizzo: sequenza %s \n", argv[0]);
        return 0;
    }

    char* sequenza = argv[1];
    int lunghezza = strlen(sequenza);
    int gruppi = 0;
    int inGruppo = 0;

    for (int i = 0; i < lunghezza; i++) {
        if (sequenza[i] == 1 || sequenza[i] == 0) {
            if (i == 0 || sequenza[i] != sequenza[i - 1]) {
                gruppi++;
            }
        }
    }

    if (gruppi == 0) {
        printf("Nessun gruppo di 1 o 0 .\n");
    } else {
        printf("Numero di gruppi consecutivi distinti di 1 e 0: %d \n", gruppi);
    }

    return 0;
}


    
