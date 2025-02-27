/*Scrivi un programma in C++ che:

1.Definisce un vettore di dimensione massima predefinita (ad
esempio DIM_MAX = 1024).
2.Chiede all'utente quanti elementi vuole inserire nel vettore (la dimensione
effettiva, che deve essere minore o uguale a DIM_MAX).
3.Chiede all'utente di inserire gli elementi del vettore, uno per uno.
4.Inverte l'ordine degli elementi del vettore (il primo elemento diventa l'ultimo, il
secondo diventa il penultimo, ecc.).
5.Stampa il vettore invertito usando una funzione.*/
#include <iostream>
using namespace std;
void stampa(int array[],int dim){
    for(int i=0;i<dim;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
	int dimMax=1024;
    int vet[dimMax];
    int dim;
    int num;
    int tmp;

    do{
        cout<<"inserisci il numero di elementi che vuoi memorizzare:";
        cin>>dim;
    }while(dim>=dimMax);

    for(int i=0;i<dim;i++){
        cout<<"inserisci un numero:";
        cin>>vet[i];
    }

    //scambiamo
    int inizio=0;//parte da 0, quindi punteremo alla prima cella
    while(inizio<=(dim/2)){
        tmp=vet[dim-1-inizio];
        vet[dim-1-inizio]=vet[inizio];
        vet[inizio]=tmp;
        inizio++;
    }
  
    stampa(vet,dim);
	return 0;
}