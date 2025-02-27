/*1)Calcolo della media
Scrivi un programma in C++ che utilizzi una funzione per calcolare la media di tre numeri. 
La funzione deve accettare tre parametri (i tre numeri) e restituire la media. Nel main, chiedi all'utente di inserire tre numeri e stampa la media.*/
#include <iostream>
using namespace std;
float media(float a, float b, float c){//devono essere float, perchè se si lavora con interi anche se salvo il risultato in un float il risultato sarà intero, si cerca
	//quanto più possibile di lavorare con variabili dello stesso tipo
	float risultato;
	risultato=(a+b+c)/3;
	return risultato;
}
int main(){
	float num1,num2,num3;
	cout<<"inserisci num1:";cin>>num1;
	cout<<"inserisci num2:";cin>>num2;
	cout<<"inserisci num3:";cin>>num3;
	cout<<media(num1,num2,num3)<<endl;
	return 0;
}