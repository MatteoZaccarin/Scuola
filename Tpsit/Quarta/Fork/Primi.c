/*Si scriva un programma in C che accetti una lista di numeri interi come argomenti
tramite linea di comando e identifichi quali numeri sono primi tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi.
Esempio di esecuzione:
INPUT: ./programma 4 7 10 13 8 2
OUTPUT: I numeri primi sono: 7 13 2
Si salvi il file col nome cognomePrimi.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
    int cont=0;
    for(int i=1;i<argc;i++){
        cont=0;
        for(int div=2;div<=(atoi(argv[i])/2);div++){
            if(atoi(argv[i])%div==0)
                cont++;
        }
        if(cont==0)
            printf("%d ",atoi(argv[i]));
    }
    return 0;
}