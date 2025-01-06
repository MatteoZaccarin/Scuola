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

