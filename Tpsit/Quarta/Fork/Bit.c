/*Scrivi un programma in C che accetti una lista di numeri interi positivi o zero come
argomenti tramite linea di comando e calcoli il numero minimo di bit necessari per
rappresentare ciascun numero.
Il programma deve:
- Calcolare il numero di bit necessari per ogni numero positivo o zero.
- Ignorare eventuali argomenti non validi (cioè non numerici o numeri
negativi).
- Stampare per ogni numero valido il numero minimo di bit necessari per
rappresentarlo.
- Se nessun numero valido è stato fornito, stampare un messaggio adeguato.
Esempio:
INPUT ./programma 5 8 0 abc 15 -3
OUTPUT Numero: 5, Bit necessari: 3
Numero: 8, Bit necessari: 4
Numero: 0, Bit necessari: 1
Numero: 15, Bit necessari: 4
Salvare il file col nome cognomeBit.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    int bit=0;
    int num;
    for(int i=1;i<argc;i++){
        bit=0;
        num=atoi(argv[i]);
        if(num>=0){
            while(num>0){
                num=num/2;
                bit++;
            }
            if(bit==0)
                bit++;
            printf("%d: %d\n",atoi(argv[i]),bit);
        }
       
    }

    return 0;
}