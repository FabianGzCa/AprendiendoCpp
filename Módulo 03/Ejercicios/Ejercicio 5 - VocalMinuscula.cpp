//Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no.

#include<iostream>
using namespace std;

int main(){
	char caracter;
	
	cout<<"Dame un caracter: ";
	cin>> caracter;
	
	if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
		cout<< "Es una vocal minuscula"<<endl;
	}else{
		cout<<"No es una vocal minuscula"<<endl;
	}
	
	switch (caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Es una vocal minuscula";
			break;
		default:
			cout<<"No es una vocal minuscula";
	}
	
	return 0;
}
