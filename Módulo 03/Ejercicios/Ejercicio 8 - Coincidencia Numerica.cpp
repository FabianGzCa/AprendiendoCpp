/*
Escribir un programa que lea de la entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.
*/

#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3, numComprobar;
	
	cout<<"Digita 3 numeros: ";
	cin>> num1 >> num2 >> num3;
	cout<<"Digita un cuarto numero: ";
	cin>>numComprobar;
	
	if (numComprobar==num1 || numComprobar==num2 || numComprobar==num3){
		cout<<"El cuarto numero es igual a alguno de los tres primeros"<<endl;
	}else{
		cout<<"El cuarto numero es unico, no coincide con ninguno de los primeros 3"<<endl;
	}
	
	return 0;
}
