// Utilizando sentencias if

#include<iostream>
using namespace std;

int main(){
	
	int numero, dato=5;
	
	cout<<"Dame un numero: ";
	cin>>numero;
	
	if (numero == dato){
		cout<<"El numero es 5"<<endl;
	}else{
		cout<<"El numero es diferente de 5"<<endl;
	}
	
	cout<<"El programa ha finalizado.";
	
	return 0;
}
