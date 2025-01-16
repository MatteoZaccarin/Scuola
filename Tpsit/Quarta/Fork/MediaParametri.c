/*Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite
linea di comando e calcoli la media della lunghezza delle stringhe.
Esempio di esecuzione:
INPUT:./programma mela arancia pera ciliegia
OUTPUT: La lunghezza media delle stringhe è: 5.5 Le stringhe
più lunghe della media sono: arancia ciliegia
Si salvi il file col nome cognomeMedia.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
    float media=0;

    for(int i=1;i<argc;i++){
        media=media+strlen(argv[i]);
    }

    media=media/(argc-1);
    printf("media:%f\n Le parole più lunghe della media sono:",media);

    for(int i=1;i<argc;i++){
        if(media<strlen(argv[i]))
            printf("%s ",argv[i]);
    }
    return 0;
}