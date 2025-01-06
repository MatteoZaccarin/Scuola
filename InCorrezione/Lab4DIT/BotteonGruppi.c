//Botteon Andrea 4^DIT 23/11/024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main (int argc, char* argv[]){
	if(argc==2){
		int conta,p=1,i=1;
		bool f;
		do{
			f=false;
			conta=0;
			while(f==true && i<strlen(argv[1])){
				if(argv[1][i] != argv[1][i-1] && (argv[1][i] != '1' || argv[1][i] !='0')){
					f=false;
				}
			if(argv[1][i] == '1' || argv[1][i] !='0'){
					p++;
				}	
		}
		}while(i<strlen(argv[1]));
		printf("%s numero di gruppi consecutivi %d", argv[1],p);	
		
	}
	else{
		printf("errore");
	}
	
	return 0;
}
