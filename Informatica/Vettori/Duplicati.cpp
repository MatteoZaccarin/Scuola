/*3)Crea un programma che:Chiede all'utente di inserire 10 numeri in un vettore.Verifica se ci sono numeri duplicati nel vettore.Stampa i numeri duplicati trovati 
(se presenti).Salvare come cognomeTerzo.cpp*/
#include <iostream>
using namespace std;
int main(){
    int dim=1024;
    int array[dim];
    int n;
    bool isDuplicato=false;
    do{
        cout<<"inserisci una dimensione per il vettore n:";
        cin>>n;
    }while(n<=0);

    //inserisco i numeri nel vettore
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero in posizione "<<i<<" da inserire nel vettore:";
        cin>>array[i];
    }

    //esamino se ci sono duplicati
    for(int i=0;i<n;i++){
        isDuplicato=false;
        for(int j=0;j<n && isDuplicato==false;j++){
            if(i!=j && array[i]==array[j]){
                isDuplicato=true;
            }
            if(isDuplicato==true)
                cout<<array[i]<<" è duplicato"<<endl;
        }
    }
}
