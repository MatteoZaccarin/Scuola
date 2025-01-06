/*Trova il più piccolo divisore di un numero (eccetto 1). Nome "cognome3.cpp"*/
#include <iostream>
using namespace std;
int main(){
    int num,div=2;
    bool trovato=false;

    cout<<"inserisci il numero:";
    cin>>num;

    while(div<=num && trovato==false)//nel momento in cui lo trovo mi posso fermare
    {
        if(num%div==0){
            trovato=true;
        }else{
            div++;
        }
    }
    
    cout<<"il div è "<<div<<endl;
    return 0;
}