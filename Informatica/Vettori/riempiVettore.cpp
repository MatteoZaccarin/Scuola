/*1) Realizza un programma che richiede un n positivo all' utente e successivamente chiede n numeri 
all' utente che dovranno venire inseriti in un vettore. Dopo di ciò stampare il vettore. Salvare come cognomePrimo.cpp
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int dim=1024;
    int vet[dim];
    do{
        cout<<"inserisci n:";
        cin>>n;
    }while(n<=0);

    for(int i=0;i<n;i++){
        cout<<"inserisci un numero:";
        cin>>vet[i];
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<vet[i]<<endl;
    }

    return 0;
}