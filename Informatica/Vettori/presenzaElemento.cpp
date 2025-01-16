/*2) Realizza un programma che richiede un n positivo all' utente e un intero m. Successivamente chiede n numeri all' utente 
che dovranno venire inseriti in un vettore. Dopo di ciò andare a controllare se m è presente all' interno del vettore e comunicare l' esito del controllo al' utente.
 Salvare come cognomeSecondo.cpp*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int dim=1024;
    int vet[dim];
    int m;
    bool trovato=false;//lo inizializzo a false e solo se lo trovo lo imposto a true

    do{
        cout<<"inserisci n:";
        cin>>n;
    }while(n<=0);

    cout<<"inserisci m:";
    cin>>m;

    for(int i=0;i<n;i++){
        cout<<"inserisci un numero:"; //riempio il vettore con questo for
        cin>>vet[i];
    }

    for(int i=0;i<n;i++){
       if(vet[i]==m)
            trovato=true;
    }

    if(trovato==true){
        cout<<"Ho trovato il numero"<<endl;
    }else{
        cout<<"Non ho trovato il numero"<<endl;
    }

    return 0;
}