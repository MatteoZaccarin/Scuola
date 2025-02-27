/*scrivi un programma in C++ che:
Utilizza un vettore di dimensione fissa (ad esempio DIM = 1024) per memorizzare i numeri pari inseriti dall'utente.
Continua a chiedere all'utente di inserire numeri interi fino a quando:
    -Il vettore è pieno, oppure
    -L'utente inserisce -1.

Per ogni numero inserito, verifica se è pari (con una funzione). Se è pari, memorizzalo nel vettore.
Alla fine del programma, stampa tutti i numeri pari memorizzati nel vettore.*/
#include <iostream>
using namespace std;
bool Pari(int n){
	if(n%2==0)
		return true;
	else
		return false;
}
void stampaVettore(int vet[],int dim){
	for(int i=0;i<dim;i++){
		cout<<vet[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int dimMAX=1024;
	int vet[dimMAX];
	int dim=0;//dimensione effettiva, quella da noi usata
	int num;
	do{
		cout<<"inserisci un numero:";
		cin>>num;
		if(num!=-1){
			if(Pari(num)==true){
				vet[dim]=num;
				dim++;
			}
		}
	}while(num!=-1 && dim<dimMAX);

	stampaVettore(vet,dim);
	return 0;
}