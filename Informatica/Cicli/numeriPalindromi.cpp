//dato un numero n in input stampare tutti i numeri palindromi da 1 a n.
//un numero è palindromo se letto al contrario è uguale all' originale es: 121
#include <iostream>
using namespace std;
int main(){
	int n,cifra,invertito=0,copia;
	do{
		cout<<"inserisci n:";
		cin>>n;
	}while(n<=0);
	
	for(int i=1;i<=n;i++){
		copia=i;//copia ci serve per non perdere il valore di i
		//i non può essere modificato perchè è usato nella condizione del ciclo
        invertito=0;
        
		while(copia>0){
			cifra=copia%10;
			invertito=(invertito*10)+cifra;
			copia=copia/10;
			
		}
		if(invertito==i)
			cout<<i<<endl;
	}
	return 0;
}
