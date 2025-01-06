//poiana sebastian 23.11.2024
/*insei*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
	if(argc == 2){
		int contaFin=0, i=1;
		bool cond;
		do{
			cond=false;
			while(cond==false && i<strlen(argv[1])){
				if((argv[1][i] != argv[1][i-1]) && (argv[1][i] != '1' || argv[1][i] != '0')){
					cond=false;
					if(argv[1][i] == '1' || argv[1][i] == '0'){
					contaFin++;
					}
				}
				i++;
			}
		}while(i<strlen(argv[1]));
		cond=false;
		for(int j=0; j<strlen(argv[1]) && cond==false; j++){
			if(argv[1][i] != '1' || argv[1][i] != '0'){
				cond=true;
			}
		}
		if(cond==false){
			printf("%s | numero di gruppi consecutivi: 0", argv[1]);
		}
		else{
			printf("%s | numero di gruppi consecutivi: %d", argv[1], contaFin);	
		}
	}
	else{
		printf("errore");
	}
	return 0;
}
