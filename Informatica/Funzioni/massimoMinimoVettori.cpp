/*1) Scrivi un programma in C++ che:
1.Definisce un vettore di dimensione massima predefinita (ad
esempio DIM_MAX = 1024).
2.Chiede all'utente quanti elementi vuole inserire nel vettore (la dimensione
effettiva, che deve essere minore o uguale a DIM_MAX).
3.Chiede all'utente di inserire gli elementi del vettore, uno per uno.
4.Trova il valore massimo e il valore minimo tra gli elementi del vettore usando
due funzioni separate.
5.Stampa il massimo e il minimo.*/
#include <iostream>
using namespace std;
int Massimo(int array[],int dim){
    int ris;
    for(int i=0;i<dim;i++){
        if(i==0)//al primo giro di default ho il massimo, minimo nella funzione Minimo
            ris=array[i];
        else{
            if(ris<array[i])
                ris=array[i];
        }
        
    }
    return ris;
}
int Minimo(int array[],int dim){
    int ris;
    for(int i=0;i<dim;i++){
        if(i==0)//al primo giro di default ho il massimo, minimo nella funzione Minimo
            ris=array[i];
        else{
            if(ris>array[i])
                ris=array[i];
        }
        
    }
    return ris;
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

    cout<<"massimo:"<<Massimo(vet,dim)<<endl;
    cout<<"minimo:"<<Minimo(vet,dim)<<endl;
	return 0;
}