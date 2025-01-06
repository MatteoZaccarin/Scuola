# File di quellerba

## Contenuto di quellerbaBit.c

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


## Contenuto di quellerbaGruppi.c

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


    

## Contenuto di quellerbaMedia.c

//quellerba fabio
//consegna PROGRAMMA CHE ACCETTA UNA LISTA DI STRINGHE COME ARGOMENTI TRAMITE LINEA DI COMANDI
//E CALCOLI LA MEDIA DELLA LUNGHEZZA DELLE STRINGHE INT PROGRAMMMA MELA ARANCIA PERA CIGLIEGIA
//OUTPUT LUNGHEZZA MEDIA DELLE STRINGHE è 5.5 LE STRINGHE PIU LUNGHE DELLA MEDIA SONO ARANCIA E CILIEGIA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char* argv[]) {
    if (argc <= 1) {
        printf("lista di stringhe come argomenti \n");
        return 1;
    }

    int lunghezzatotale = 0;
    int conto = argc - 1;

    for (int i = 1; i < argc; i++) 
	{
        lunghezzatotale += strlen(argv[i]);
    }

    float lunghezzamedia = (float)lunghezzatotale / conto;
    printf("lunghezza media delle stringhe è %f \n", lunghezzamedia);
    printf("tringhe più lunghe della media sono: ");

    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) > lunghezzamedia) 
		{
            printf("%s ", argv[i]);
        }
    }

    printf("\n");
    return 0;
}


## Contenuto di quellerbaPrimi.c

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

