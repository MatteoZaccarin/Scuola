/*Calcolo del numero di cifre
Scrivi una funzione che accetti un numero intero come parametro e restituisca il numero di cifre che lo compongono. 
Nel main, chiedi all'utente di inserire un numero e stampa il numero di cifre.
Inserisci un numero: 12345 
Il numero 12345 ha 5 cifre.*/
#include <iostream>
using namespace std;
int contaCifre(int n){
    int cifre=0;
    while(n!=0){
        n=n/10;
        cifre++;
    }
    return cifre;
}

int main(){
    int numero;
    cout<<"inserisci numero:";
    cin>>numero;

    cout<<contaCifre(numero)<<endl;
    return 0;
}