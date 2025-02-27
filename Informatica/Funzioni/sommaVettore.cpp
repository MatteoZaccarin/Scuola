/*Scrivi un programma in C++ che:
Utilizza un vettore di dimensione fissa (ad esempio DIM = 1024).
Chiede all'utente di inserire un intero positivo n (minore di DIM) e dopodichè n interi e li memorizza nel vettore.
Calcola la somma di tutti gli elementi del vettore utilizzando una funzione.
Stampa la somma.*/
#include <iostream>
using namespace std;

void stampaVettore(int vet[],int dim){
	for(int i=0;i<dim;i++){
		cout<<vet[i]<<" ";
	}
	cout<<endl;
}
int sommaVettore(int vet[],int dim){
    int somma=0;
	for(int i=0;i<dim;i++){
		somma=somma+vet[i];
	}
    return somma;
	
}
int main(){
	int dimMax=1024;
    int vet[dimMax];
    int n;//sarà la dim effettiva
    do{
        cout<<"inserisci la dimensione del vettore:";
        cin>>n;
    }while(n<=0);

    for(int i=0;i<n;i++){
        cout<<"inserisci il numero in posizione "<<i<<":";
        cin>>vet[i];
    }
    cout<<"somma:"<<sommaVettore(vet,n)<<endl;
	return 0;
}