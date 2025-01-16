/*Scrivi un programma in C che accetti una sequenza di caratteri (stringhe) come
argomenti tramite linea di comando e consideri solo i caratteri 1 e 0. Il programma
deve contare quanti gruppi consecutivi distinti di 1 e 0 sono presenti.
Un gruppo è definito da una sequenza consecutiva di caratteri identici (ad esempio,
111 o 000 contano come un gruppo ciascuno).
Il programma deve:
Ignorare tutti i caratteri che non siano 1 o 0.
Stampare il numero di gruppi consecutivi distinti di 1 e 0.
Se non ci sono né 1 né 0, stampare un messaggio adeguato.
Esempio 1:
INPUT ./programma 110011abc0101
OUTPUT Numero di gruppi consecutivi: 6
Esempio 2:
INPUT ./programma 1111000110
OUTPUT Numero di gruppi consecutivi: 4*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){//suppongo di avere un solo parametro, una stringa
    if(argc==2){
        char precedente;
        int gruppi=0;
        for(int i=0;i<strlen(argv[1]);i++){
            if(argv[1][i]=='1' || argv[1][i]=='0'){
                if(i==0){
                    precedente=argv[1][i];
                    gruppi++;
                }else{
                    if(argv[1][i]!=precedente){
                        gruppi++;
                        precedente=argv[1][i];
                    }
                }
            }
           
        }
        printf("il numero di gruppi è %d\n",gruppi);

    }else
        printf("errore nei parametri\n");
    

    return 0;
}