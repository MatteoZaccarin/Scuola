/*2)Creare una funzione che riceve una quantità di tempo in formato ore, minuti e secondi e la restituisce espressa solamente in secondi.*/
#include <iostream>
using namespace std;
int convertiSecondi(int ore,int minuti, int secondi){
	ore=ore*60*60;
	minuti=minuti*60;
	return ore+minuti+secondi;
}
int main(){
	int ore,minuti,secondi;
	do{
		cout<<"inserisci un numero di ore:";
		cin>>ore;
	}while(ore<0);
	do{
		cout<<"inserisci un numero di minuti:";
		cin>>minuti;
	}while(minuti<0);
	do{
		cout<<"inserisci un numero di secondi:";
		cin>>secondi;
	}while(secondi<0);

	cout<<convertiSecondi(ore,minuti,secondi)<<endl;
	return 0;
}