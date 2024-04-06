// Comprobar si un numero digitado por el usuario es positivo o negativo.

#include<iostream>
using namespace std;

int main(){
	int numero=0;
	
	cout<<"Dame un numero: ";
	cin>>numero;
	
	if (numero > 0){
		cout<<"El numero es positivo";
	}else if(numero < 0){
		cout<<"El numero es negativo";
	}else{
		cout<<"El numero es 0";
	}
	
	return 0;
}
