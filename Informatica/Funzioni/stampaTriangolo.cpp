/*2)Stampa di un triangolo di numeri
Scrivi una funzione che accetti un numero intero n come parametro e stampi un triangolo di numeri come nell'esempio. 
Nel main, chiedi all'utente di inserire un numero e utilizza la funzione per stampare il triangolo.
Inserisci un numero: 4  
1  
12  
123  
1234*/
#include <iostream>
using namespace std;
void stampaTriangolo(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
		
}
int main(){
	int numero;
	cout<<"inserisci un numero:";cin>>numero;
	stampaTriangolo(numero);
	return 0;
}