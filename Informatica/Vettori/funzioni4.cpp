/*Scrivi una funzione che accetti due parametri: un numero intero n e un carattere c. La funzione deve stampare n volte il carattere c su una riga. 
Nel main, chiedi all'utente di inserire un numero e un carattere, e utilizza la funzione per stampare la sequenza.

Inserisci un numero: 5 
Inserisci un carattere: * 
******/
#include <iostream>
using namespace std;
void stampaSequenza(int n, char c){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
}
int main(){
    int numero1;
    char c;
    do{
        cout<<"inserisci numero1:";
        cin>>numero1;
    }while(numero1<=0);
    cout<<"inserisci un carattere:";
    cin>>c;
    stampaSequenza(numero1,c);


    return 0;
}