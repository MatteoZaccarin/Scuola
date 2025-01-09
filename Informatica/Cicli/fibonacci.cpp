#include <iostream>
using namespace std;
int main(){
	int n, fib1=0,fib2=1,tmp;

    do{
        cout<<"inserisci n:";
        cin>>n;
    }while(n<=0);
    
    for(int i=0;i<n;i++){
    	cout<<fib1<<" ";
    	tmp=fib2;
    	fib2=fib2+fib1;
    	fib1=tmp;
	}
	
	return 0;
}
