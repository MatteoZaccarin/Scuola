/* Scrivi un programma che chiede all'utente di inserire numeri finché non inserisce -1. Al termine, il programma stampa
 quanti numeri pari e quanti numeri dispari sono stati inseriti (escludendo -1). Es: INPUT 1 2 4 6 8 9 0 OUTPUT pari:4 dispari:2
Salvarlo come cognomePariDispari.cpp*/
#include <iostream>
using namespace std;
int main(){
    int contPari=0,contDispari=0,num;

    do{
        
        cout<<"inserisci il numero:";
        cin>>num;
        if(num!=-1){
            if(num%2==0){
                contPari++;
            }else{
                contDispari++;
            }
        }
      
    }while(num!=-1);
    cout<<"i numeri pari sono "<<contPari<<" e i dispari sono "<<contDispari<<endl;
    return 0;
}
