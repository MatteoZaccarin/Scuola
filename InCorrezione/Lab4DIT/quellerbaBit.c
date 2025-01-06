//quellerba fabio
//Programma in c che accetti una lista di numeri positivi o zero come argomenti tramite linea di comando
//e calcoli il numero di bit necessarti per rappresentare ciascun numero
//calcola numero positivo o zero, ignora argomenti non validi,stampa ogni numero valido,se non sono validi mettere messaggio adeguato
//numeri, 5 bit 3, 8 e 4, 0 e 1, 15 e 4. char argv argc senza break e return. 

#include <stdio.h>
#include <stdlib.h>

int conta_bit(int n) {
    int conta = 0;
    while (n > 0) {
        n = n / 2;
        conta++;
    }
    return conta;
}


int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("ERRORE: Inserisci un numero positivo o zero.\n");
    } else {
        for (int i = 1; i < argc; i++) {
            int n = atoi(argv[i]);
            if (n >= 0) {
                printf("Numero: %d, Bit necessari: %d\n", n, conta_bit(n));
            } else {
                printf("Argomento non valido: %s\n", argv[i]);
            }
        }
    }
}

