/*2)Scrivi un programma che:Chiede all'utente di inserire 5 numeri in un vettore.Inverte l'ordine degli elementi nel vettore.Stampa il vettore originale e quello 
invertito.Salvare come cognomeSecondo.cpp*/
#include <iostream>
using namespace std;
int main(){
    int dim=1024;
    int array[dim];
    int invertito[dim];
    int n;
    do{
        cout<<"inserisci una dimensione per il vettore n:";
        cin>>n;
    }while(n<=0);

    //inserisco i numeri nel vettore
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero in posizione "<<i<<" da inserire nel vettore:";
        cin>>array[i];
    }

    //inverto i numeri nel vettore 'invertito'
    for(int i=0;i<n;i++){
        invertito[n-i-1]=array[i];//n-i-1 perchè devo salvare la prima cella nell' ultima e così via
    }

    //stampo quello normale
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    //stampo invertito
    for(int i=0;i<n;i++){
        cout<<array[n-i-1]<<" ";
    }
    cout<<endl;
}
/*

3)Crea un programma che:Chiede all'utente di inserire 10 numeri in un vettore.Verifica se ci sono numeri duplicati nel vettore.Stampa i numeri duplicati trovati (se presenti).Salvare come cognomeTerzo.cpp
*/