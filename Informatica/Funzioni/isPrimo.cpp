/*1)Scrivi un programma in C++ che continui a chiedere all'utente di inserire un numero intero positivo fino a quando non viene inserito il valore -1. 
Per ogni numero inserito, verifica se è un numero primo utilizzando una funzione dedicata che DEVE ritornare il risultato del controllo. Se il numero è primo,
 stampa un messaggio che lo conferma; altrimenti, stampa un messaggio che indica che non è primo.*/
#include <iostream>
using namespace std;
bool isPrimo(int n){//booleano perchè io chiedo se è primo e voglio una risposta del tipo vero o falso
	bool Primo=true;//diversi da 1 e n
	for(int div=2;div<=n/2 && Primo==true;div++){
		if(n%div==0)
			Primo=false;
	}
	return Primo;
}
int main(){
	int num;
	do{
		cout<<"inserisci un numero diverso da -1:";
		cin>>num;
		if(num!=-1){
			if(isPrimo(num)==true)//vado a controllare se quello che la funzione mi ritorna è true, ovvero se il numero è primo
				cout<<num<<" è primo"<<endl;
			else
				cout<<num<<" non è primo"<<endl;

		}
	}while(num!=-1);
	return 0;
}