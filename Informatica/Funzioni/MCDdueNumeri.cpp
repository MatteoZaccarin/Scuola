/*3)Calcolo del MCD (Massimo Comune Divisore)
Scrivi una funzione che calcoli il Massimo Comune Divisore (MCD) di due numeri interi .
 La funzione deve accettare due parametri (i due numeri) e restituire il MCD. Nel main, chiedi all'utente di inserire due numeri e stampa il MCD.

Inserisci due numeri: 56 98  
Il MCD di 56 e 98 è: 14*/
#include <iostream>
using namespace std;
int MCD(int a,int b){
	int risultato;
	int i=1;
	while(i<=a && i<=b){
		if(a%i==0 && b%i==0)
			risultato=i;
		i++;
	}
	return risultato;
}
int main(){
	int num1,num2;
	do{
		cout<<"inserisci un numero maggiore di 0:";
		cin>>num1;
	}while(num1<=0);
	do{
		cout<<"inserisci un numero maggiore di 0:";
		cin>>num2;
	}while(num2<=0);
	cout<<MCD(num1,num2)<<endl;
	return 0;
}