/*Scrivi un programma in C++ che:
- Definisce un vettore di dimensione massima predefinita (ad esempio DIM_MAX = 100).
- Chiede all'utente quanti elementi vuole inserire nel vettore (la dimensione effettiva, che deve essere minore o uguale a DIM_MAX).
- Chiede all'utente di inserire gli elementi del vettore, uno per uno.
- Chiede all'utente di inserire un numero da cercare nel vettore.
- Conta quante volte il numero inserito appare nel vettore.
- Stampa il risultato, indicando quante volte il numero è presente nel vettore.
PRECISAZIONI
    Chiedi all'utente quanti elementi vuole inserire (assicurati che il numero sia valido, cioè minore o uguale a DIM_MAX).
    Usa un ciclo per chiedere all'utente di inserire gli elementi del vettore.
    Scrivi una funzione che accetta il vettore, la sua dimensione effettiva e il numero da cercare, e restituisce il numero di occorrenze.
    Nel main, chiama la funzione e stampa il risultato.*/
#include <iostream>
using namespace std;
int contaOccorrenze(int array[],int dim, int n){
    int conta=0;
    for(int i=0;i<dim;i++){
        if(array[i]==n)
            conta++;
    }
    return conta;
}
int main(){
	int dimMax=1024;
    int vet[dimMax];
    int dim;
    int num;

    do{
        cout<<"inserisci il numero di elementi che vuoi memorizzare:";
        cin>>dim;
    }while(dim>=dimMax);

    for(int i=0;i<dim;i++){
        cout<<"inserisci un numero:";
        cin>>vet[i];
    }

    cout<<"inserisci un numero da cercare:";
    cin>>num;

    cout<<"il numero appare "<<contaOccorrenze(vet,dim,num)<<" volte"<<endl;
	return 0;
}