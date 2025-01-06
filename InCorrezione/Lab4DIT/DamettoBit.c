//Antonio.dametto 4^dit 23/11/2024

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc,char*argv[]){
	int bitnecessari(int n){
		int bit=0;
		do{bit++;n>>=1;}
		while(n>0);
		return bit;
	}
	
	int main(int argc,char*argv[]){
		int i=1;
		for(i;i<argc;i++){
			int n=atoi(argv[i]);
			if((n>0||strcmp(argv[1],"0")==0)&& n>=0){
				printf("numero:%d,bit necessari:%d\n",n,bitnecessari(n));
				
			}else{
				printf("non e' valido:%s\n",argv[i])
				
			}
		
}
	return 0;
}


