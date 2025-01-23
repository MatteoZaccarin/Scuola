/*1)Scrivi un programma che:Chiede all'utente di inserire 5 numeri e li memorizza in un vettore.Calcola la somma e la media dei numeri nel vettore.
Stampa i risultati.Salvare come cognomePrimo.cpp*/
#include <iostream>
using namespace std;
int main(){
    int dim=1024;
    int array[dim];
    int n;
    float somma=0;
    do{
        cout<<"inserisci una dimensione per il vettore n:";
        cin>>n;
    }while(n<=0);

    //inserisco i numeri nel vettore
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero in posizione "<<i<<" da inserire nel vettore:";
        cin>>array[i];
    }

    //esamino il vettore per sommare gli elementi
    for(int i=0;i<n;i++){
        somma=somma+array[i];
    }

    cout<<"La somma è "<<somma<<endl;
    //calcolo la media
    cout<<"La media è "<<somma/n;
    return 0;
}
/*2)Scrivi un programma che:Chiede all'utente di inserire 5 numeri in un vettore.Inverte l'ordine degli elementi nel vettore.Stampa il vettore originale e quello invertito.Salvare come cognomeSecondo.cpp

3)Crea un programma che:Chiede all'utente di inserire 10 numeri in un vettore.Verifica se ci sono numeri duplicati nel vettore.Stampa i numeri duplicati trovati (se presenti).Salvare come cognomeTerzo.cpp
*/