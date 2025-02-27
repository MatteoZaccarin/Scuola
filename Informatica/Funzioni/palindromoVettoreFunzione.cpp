/*Scrivi un programma in C++ che:

1.Definisce un vettore di dimensione massima predefinita (ad
esempio DIM_MAX = 1024).
2.Chiede all'utente quanti elementi vuole inserire nel vettore (la dimensione
effettiva, che deve essere minore o uguale a DIM_MAX).
3.Chiede all'utente di inserire gli elementi del vettore, uno per uno.
4.Verifica se il vettore è palindromo (usando una funzione), cioè se gli elementi
sono uguali quando letti da sinistra a destra e da destra a sinistra.
5.Stampa un messaggio che indica se il vettore è palindromo o meno.*/
#include <iostream>
using namespace std;
bool palindromo(int vet[], int dim){
    bool ris=true;
    for(int i=0;i<=(dim/2) && ris==true;i++){
        if(vet[i]!=vet[dim-1-i])
            ris=false;
    }
    return ris;
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
  
    if(palindromo(vet,dim)==true){
        cout<<"è palindromo"<<endl;
    }else{
        cout<<"non è palindromo"<<endl;
    }
	return 0;
}