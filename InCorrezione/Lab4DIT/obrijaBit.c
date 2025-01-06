//Denis Obrija 4dit 23/11/2024
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    if(argc>1){
        for(int i=1;i<argc;i++) {
            int n=atoi(argv[i]);
			if (n<=0) {
                printf("\nErrore: %s non è un numero positivo.", argv[i]);
                }
			int conta=0;
			while(n>0) {
                n=n/2;
                conta++;
            }
			printf("\n%s servono %d bit", argv[i], conta);
        }
    }else{
        printf("\nParametri insufficienti");
    }

    return 0;
}


