//TOFAN DAVID 4DIT 23/11/2024
//ES1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int num, i, j, blocco=0, div=num, stop;
	for(i=1;i<argc;i++)
	{
		int bit=0;
		num=atoi(argv[i]);
		if(num<0)
		{
			blocco++;
			printf("sono stati inseriti %d numeri non accettabili\n", blocco);
			printf("%d", num);
		}
		if(num>0){
			if(num>=0 && num<=1)
			{
				bit=1;	
			}
			if(num>=2 && num<=3)
			{
				bit=2;
			}
			if(num>3 && num<=7)
			{
				bit=3;	
			}
			if(num>7 && num<=15)
			{
				bit=4;	
			}
			if(num>15 && num<=31)
			{
				bit=5;	
			}
			if(num>31 && num<=63)
			{
				bit=6;	
			}
			if(num>63 && num<=127)
			{
				bit=7;	
			}	
			
		printf("numero: %d, Bit necessari: %d \n", num, bit);	
		}
			
	}
	return 0;			
	}	
		
