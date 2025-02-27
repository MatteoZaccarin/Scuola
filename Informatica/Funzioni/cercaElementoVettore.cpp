/*3)Scrivi un programma in C++ che:
Utilizza un vettore di dimensione fissa (ad esempio DIM = 1024).
Chiede all'utente di inserire un intero positivo n (minore di DIM) e dopodichè n interi e li memorizza nel vettore.
Chiede all'utente di inserire un numero da cercare nel vettore.
utilizza una funzione per verificare se il numero è presente nel vettore.
Stampa un messaggio che indica se il numero è stato trovato o meno.*/
#include <iostream>
using namespace std;
int cercaElemento(int vet[],int dim,int n){
    bool trovato=false;
	for(int i=0;i<dim && trovato==false;i++){
		if(n==vet[i])
            trovato=true;
	}
    return trovato;
	
}
int main(){
	int dimMax=1024;
    int vet[dimMax];
    int n;//sarà la dim effettiva
    int num;
    do{
        cout<<"inserisci la dimensione del vettore:";
        cin>>n;
    }while(n<=0);
   
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero in posizione "<<i<<":";
        cin>>vet[i];
    }
    cout<<"inserisci il num da cercare:";
    
    cin>>num;
    if(cercaElemento(vet,n,num)==true)
        cout<<"il numero è presente nel vettore";
    else
        cout<<"il numero non è presente nel vettore";
	return 0;
}