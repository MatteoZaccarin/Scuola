/*3) Realizza un programma che richiede un n positivo all' utente e successivamente chiede n numeri positivi all' utente che dovranno venire inseriti in un vettore. 
Dopo di ciò stampare il vettore. Salvare come cognomeTerzo.*/
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
        do{
            cout<<"inserisci un numero che avrà indice "<<i<<":";
            cin>>vet[i];
        }while(vet[i]<=0);
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<vet[i]<<endl;
    }
    return 0;
}
