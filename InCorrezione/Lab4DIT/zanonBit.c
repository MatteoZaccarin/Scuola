//Gianluca Zanon 4 dit 23/11/2024
//es1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int bit=0, num, i;
	if(argc>1){
		for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		if(num==0){
			printf("numero: %d , bit neccessari: 1\n", atoi(argv[i]), bit);
		}
		if(num>0){
			while(num!=0 && num>0){
			num=num/2;
			bit=bit+1;
			}
			printf("numero: %d , bit neccessari: %d\n", atoi(argv[i]), bit);
			bit=0;
		}
		}
	}	
	return 0;
}
