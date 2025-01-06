/*Scrivi un programma che verifica se un numero dato è "perfetto". Un numero è perfetto se è uguale alla somma dei suoi divisori (escluso se stesso). 
Ad esempio, 6 è perfetto perché 1+2+3=6 . Nome "cognome4.cpp"*/
#include <iostream>
using namespace std;
int main(){
    int num,div=1,somma=0;
    do{
        cout<<"inserisci il num:";
        cin>>num;

    }while(num<=0);


    while(div<num){
        if(num%div==0){
            somma=somma+div;
        }
        div++;
    }

    if(somma==num){
        cout<<"il num è perfetto"<<endl;
    }else{
        cout<<"il numero non è perfetto"<<endl;
    }
    return 0;
}