/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/

#include<iostream>

using namespace std;

int main(){
	int num1, num2, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"Digita un numero: ";
	cin>>num1;
	
	cout<<"Digita otro numero: ";
	cin>>num2;
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de la division es: "<<division;
	
	return 0;
}
