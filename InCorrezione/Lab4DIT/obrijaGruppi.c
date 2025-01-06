//Denis Obrija 4dit 23/11/2024

int main(int argc, char* argv[]){
	if(argc<1){
		printf("\nParametri insufficienti");
		}else{
			int gruppo=0;
			int conta=0;
			for(int i=1;i<argc;i++){
				if((argv[1][i]==1)&&(argv[1][i]==0)){
					conta++;
					if(conta==3){
						gruppo++;
						conta=0;
					}
					//ho provato a fare una stringa unica
					//non funziona
				}
				printf(" %d ", gruppo);
			}
			}
		return 0;

}
