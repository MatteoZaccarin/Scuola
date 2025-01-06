# File di variola

## Contenuto di variolaBit.c

//Mattia Variola
//Es1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char*argv[]){
	if(argc>=2){
		int n=0;
		int num=0;
		int resto=0;
		int conta=0;
		int i=1;
		for(i=1;i<argc;i++){
			num=atoi(argv[i]);
			n=atoi(argv[i]);
			resto=num%2;
			num=num/2;
			conta++;
			printf("Numero %d, %d Bit necessari.\n", n, num);
		}
	}
	else
	{
		printf("Il numero di parametri e errato.");
	}
	return 0;
}

//SOL serve un loop
## Contenuto di variolaMedia.c

//Mattia Variola 4DIT 19/11/24
//Es1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	if(argc>=2){   //Verifico che il nuero di parametri sia corretto.
		int i=1;
		int n;
		int somma;
		char pMax;
		int max=0;
		int lun[i];
		for(i=1;i<argc;i++){
			n=strlen(argv[i]);  //Assegno la dimensione (numero di caratteri) di argv[] a n.
			if(n>max){
				max=n;   //Se n>max assegno a max il valore di n.
				pMax=argv[i];
			}
			somma=somma+n;  //Eseguo la somma dei caratteri presenti in tutti i parametri.
		}	
		int media=somma/(argc);        //Calcolo la media dei caratteri dividento la somma dei caratteri di tutti i parametri con il numero di parametri.
		printf("La media della lunghezza delle stringhe e di %d caratteri.\n", media);
		printf("La parola pi� lunga e compsta da %d lettere, ed e la parola %c\n", max, pMax);
	}
	else
	{
			printf("Numero dei parametri errato."); 
	}
	return 0;
}

## Contenuto di variolaPrimi.c

//Mattia Variola 4DIT 19/11/24
//Es2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char*argv[]){
	int i=0;
	int n[i];
	int j=0;
	int primo[j];
	for(i=0;i<argc;i++){
		n[i]=atoi(argv[i+1]);
		for(i=0;i<argc;i++){
			if(n[i]%2==0){          //non ho fatto in tempo a verificare se sono primi allora ho fatto pari
				primo[j]=n[i];
				j++;
			}
			else{
				i++;
			}
		}
	}
	j=0;
	printf("I numeri primi sono: ");
	for(j=0;j<argc;j++){
		printf("%d ", primo[j]);
	}
	return 0;
}

//SOl accedi a celle di memoria non usabili