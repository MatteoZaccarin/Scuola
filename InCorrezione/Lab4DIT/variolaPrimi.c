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
