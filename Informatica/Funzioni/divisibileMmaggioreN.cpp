/*4)Creare una funzione che ricevuti due numeri naturali n e m (dare per buono che vengano passati effettivamente numeri naturali) restituisce il più 
piccolo numero divisibile per m che sia contemporaneamente maggiore di n, qualora per m venga passato zero restitusice n+1.*/
#include <iostream>
using namespace std;
int funzione(int n,int m){
	int test=n+1;
	bool trovato=false;
	while(trovato==false){
		if(test%m==0)
			trovato=true;
		else
			test++;
		
	}

	return test;

}
int main(){
	int n,m;
	do{
		cout<<"inserisci n:";
		cin>>n;
	}while(n<0);
	do{
		cout<<"inserisci m:";
		cin>>m;
	}while(m<0 || m>=n);

	cout<<"Il numero maggiore di n e divisibile per m è "<<funzione(n,m)<<endl;
	return 0;
}